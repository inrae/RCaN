/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fr.cm.tables;

import fr.cm.canObjects.Flux;
import fr.cm.canObjects.ListsManager;
import fr.cm.menus.Context;
import javafx.beans.property.SimpleBooleanProperty;
import javafx.beans.value.ChangeListener;
import javafx.beans.value.ObservableValue;
import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.event.ActionEvent;
import javafx.geometry.Insets;
import javafx.scene.control.*;
import javafx.scene.control.cell.CheckBoxTableCell;
import javafx.scene.control.cell.PropertyValueFactory;
import javafx.scene.layout.HBox;
import javafx.scene.layout.Pane;
import javafx.scene.layout.VBox;
import javafx.util.Callback;

/**
 *
 * @author christianmullon
 */
public class LinkTable extends Pane {

    final TableView<Flux> table;
    ObservableList<Flux> list;

    double width = 0.9 * Context.getWidth();
    double height =  0.9 * Context.getHeight();

    public LinkTable() {
        table = new TableView<>();
        table.setMinWidth(800.0);
        table.setEditable(true);

        TableColumn<Flux, String> name = new TableColumn<>("Name");
        name.setCellValueFactory(new PropertyValueFactory<>("name"));
        name.setSortable(true);
        name.setMinWidth(300.0);

        TableColumn<Flux, Boolean> trophicCol = new TableColumn<>("Trophic link");

        trophicCol.setCellValueFactory(new Callback<TableColumn.CellDataFeatures<Flux, Boolean>, ObservableValue<Boolean>>() {

            @Override
            public ObservableValue<Boolean> call(TableColumn.CellDataFeatures<Flux, Boolean> param) {
                Flux flux = param.getValue();

                SimpleBooleanProperty booleanProp = new SimpleBooleanProperty(flux.isTypeTrophic());

                booleanProp.addListener(new ChangeListener<Boolean>() {

                    @Override
                    public void changed(ObservableValue<? extends Boolean> observable, Boolean oldValue,
                                        Boolean newValue) {
                        flux.setTypeTrophic(newValue);
                    }
                });
                return booleanProp;
            }
        });

        trophicCol.setCellFactory(new Callback<TableColumn<Flux, Boolean>, TableCell<Flux, Boolean>>() {
            @Override
            public TableCell<Flux, Boolean> call(TableColumn<Flux, Boolean> p) {
                CheckBoxTableCell<Flux, Boolean> cell = new CheckBoxTableCell<Flux, Boolean>();
                return cell;
            }
        });


        TableColumn<Flux, String> in = new TableColumn<>("From");
        in.setCellValueFactory(new PropertyValueFactory<>("inName"));
        in.setSortable(true);
        in.setMinWidth(200.0);

        TableColumn<Flux, String> out = new TableColumn<>("To");
        out.setCellValueFactory(new PropertyValueFactory<>("outName"));
        out.setSortable(true);
        out.setMinWidth(200.0);

        table.getColumns().add(name);
        table.getColumns().add(trophicCol);
        table.getColumns().add(in);
        table.getColumns().add(out);

        list = FXCollections.observableArrayList(ListsManager.getListOfFluxes());
        table.setItems(list);
        table.getSelectionModel().selectFirst();

        final Button deleteG = new Button("Delete");
        deleteG.setOnAction((ActionEvent e) -> {
            if (table.getSelectionModel().getSelectedItem() != null) {
                Flux flux = table.getSelectionModel().getSelectedItem();
                ListsManager.removeLink(flux);
                list.removeAll(flux);
            }
        });

        final Button buttonUp = new Button("Up");
        buttonUp.setOnAction((ActionEvent e) -> {
            Flux flux = table.getSelectionModel().getSelectedItem();
            ListsManager.upLink(flux);
            updateTable();
        });

        final Button buttonDown = new Button("Down");
        buttonDown.setOnAction((ActionEvent e) -> {
            Flux flux = table.getSelectionModel().getSelectedItem();
            ListsManager.downLink(flux);
            updateTable();
        });

        final HBox hbox = new HBox();
        hbox.getChildren().addAll(buttonUp, buttonDown, deleteG);
        hbox.setSpacing(50.0);
        // hbox.setMinSize(500.0, 120.0);

        final VBox vbox = new VBox();
        vbox.setSpacing(5);
        vbox.setPadding(new Insets(10.0, 0.0, 0.0, 10.0));
        vbox.getChildren().addAll(table, hbox);
        // vbox.setMinSize(500.0, 650.0);
        vbox.setLayoutX(100);
        vbox.setLayoutY(50);

        this.getChildren().addAll(vbox);
     }

    public void updateTable() {
        Flux flux = table.getSelectionModel().getSelectedItem();
        table.getItems().removeAll(list);
        list = FXCollections.observableArrayList(ListsManager.getListOfFluxes());
        table.setItems(list);
        table.getSelectionModel().select(flux);
     }

}
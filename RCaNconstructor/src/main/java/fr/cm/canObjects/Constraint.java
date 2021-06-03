/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fr.cm.canObjects;

import javafx.beans.property.SimpleStringProperty;

public class Constraint {

    final SimpleStringProperty formula = new SimpleStringProperty();
    final SimpleStringProperty name = new SimpleStringProperty();
    final SimpleStringProperty years = new SimpleStringProperty();
    final SimpleStringProperty comment = new SimpleStringProperty();
    boolean active;

    public Constraint(String name, String formula, String years, boolean act, String comment) {
        this.years.set(years);
        this.name.set(name);
        this.formula.set(formula);
        this.comment.set(comment);
        active = act;
    }

    /*
    public void update (String name, String formula, String years, boolean act, String comment) {
        this.years.set(years);
        this.name.set(name);
        this.formula.set(formula);
        this.comment.set(comment);
        active = act;
    }
    */

    public String getName(){ return(name.get()); }

    public String getFormula() { return (formula.get()); }

    public SimpleStringProperty commentProperty() {
        return comment;
    }

    public boolean involve(Flux flux) { return (getFormula().contains(flux.getName())); }

    public boolean involve(Component component) { return (getFormula().contains(component.getName())); }

    public String getYears() { return years.get(); }

    public boolean isActive() { return active; }

    public void setActive(boolean act) { active= act; }

    public void setComment(String comment) { this.comment.set(comment); }

    public String getComment() { return (comment.get()); }

    public void setName(String name) { this.name.set(name);}

    // public void setFormula(String formula) { this.formula.set(formula); }
}
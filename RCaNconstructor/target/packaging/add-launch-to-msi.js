// run with command
// cscript add-change.js
var installer = WScript.CreateObject("WindowsInstaller.Installer");
var database = installer.OpenDatabase("RCaNconstructor-22.30.15311.msi", 1);
var sql
var view

sql = "SELECT File from File where FileName='RCaNconstructor.exe'";
view = database.OpenView(sql);
view.Execute();
var file = view.Fetch().StringData(1)
WScript.StdErr.WriteLine(file);
view.Close();

try {
    sql = "INSERT INTO `CustomAction` (`Action`,`Type`,`Source`) VALUES ('ExecuteAfterFinalize','2258','" + file + "')"
    WScript.StdErr.WriteLine(sql);
    view = database.OpenView(sql);
    view.Execute();
    view.Close();

    sql = "INSERT INTO `InstallExecuteSequence` (`Action`,`Condition`,`Sequence`) VALUES ('ExecuteAfterFinalize','NOT Installed','6700')"
    WScript.StdErr.WriteLine(sql);
    view = database.OpenView(sql);
    view.Execute();
    view.Close();
    WScript.StdErr.WriteLine("Committing changes");
    database.Commit();
} catch (e) {
    WScript.StdErr.WriteLine(e);
    WScript.Quit(1);
}

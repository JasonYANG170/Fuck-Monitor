#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_checkBox_clicked(bool checked);

private:
    Ui::MainWindow *ui;
    void checkRunningProcesses(); // 检查运行的进程
    void checkAdminRights(); // 检查管理员权限
    bool isRunningAsAdmin(); // 检查程序是否以管理员身份运行
};

#endif // MAINWINDOW_H

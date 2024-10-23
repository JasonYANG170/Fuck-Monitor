#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>
#include <QFile>
#include <QMessageBox>
#include <QDir>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    checkAdminRights(); // 检查管理员权限
    checkRunningProcesses(); // 检查进程
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_checkBox_clicked(bool checked)
{
    QStringList processes = {
        "UniAccessAgentTray.exe",
        "UniAccessAgentDaemon.exe",
        "UniAccessAgent.exe",
        "SRClient.exe",
        "GetCorbicula.exe",
        "Tinaiat.exe",
        "LVFS_Client.exe",
        "DLPService.exe",
        "DLPOCR.exe",
        "DLPExtend.exe",
        "DLPCheck.exe",
        "FileDownloader.exe",
        "LvaNac.exe",
        "lvnetcheck.exe",
        "LvVulEngine.exe"
    };

    if (checked) {
        for (const QString &process : processes) {
            QProcess::execute("taskkill", QStringList() << "/f" << "/im" << process);
        }
        ui->checkBox->setText("监控已关闭"); // 更新复选框文字
    } else {
        for (const QString &process : processes) {
            QProcess::startDetached(process); // 需提供完整路径
        }
        ui->checkBox->setText("监控已恢复"); // 更新复选框文字
    }
}

void MainWindow::checkAdminRights()
{
    if (!isRunningAsAdmin()) {
        QMessageBox::warning(this, "权限警告", "该程序需要管理员权限。请以管理员身份运行。");
    }
}

bool MainWindow::isRunningAsAdmin()
{
    return QFile::exists("C:\\Windows\\System32\\taskkill.exe");
}

void MainWindow::checkRunningProcesses()
{
    QStringList processes = {
        "UniAccessAgentTray.exe",
        "UniAccessAgentDaemon.exe",
        "UniAccessAgent.exe",
        "SRClient.exe",
        "GetCorbicula.exe",
        "Tinaiat.exe",
        "LVFS_Client.exe",
        "DLPService.exe",
        "DLPOCR.exe",
        "DLPExtend.exe",
        "DLPCheck.exe",
        "FileDownloader.exe",
        "LvaNac.exe",
        "lvnetcheck.exe",
        "LvVulEngine.exe"
    };

    for (const QString &process : processes) {
        // 检查进程是否正在运行
        QProcess processChecker;
        processChecker.start("tasklist");
        processChecker.waitForFinished();
        QString output(processChecker.readAllStandardOutput());

        if (output.contains(process, Qt::CaseInsensitive)) {
            ui->checkBox->setChecked(false); // 取消勾选
            ui->checkBox->setText("监控已开启"); // 修改文本
            break;
        }else{
            ui->checkBox->setChecked(true); // 取消勾选
            ui->checkBox->setText("未检测到监控软件"); // 修改文本
            break;
        }
    }
}

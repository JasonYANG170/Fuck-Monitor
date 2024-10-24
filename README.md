<div align="center">
    <h1>Fuck-Monitor</h1>


![Static Badge](https://img.shields.io/badge/License-NO-green?style=for-the-badge)
![Commit Activity](https://img.shields.io/github/commit-activity/w/JasonYANG170/Fuck-Monitor?style=for-the-badge&color=yellow)
![Languages Count](https://img.shields.io/github/languages/count/JasonYANG170/Fuck-Monitor?logo=c&style=for-the-badge)

[![Discord](https://img.shields.io/discord/978108215499816980?style=social&logo=discord&label=echosec)](https://discord.com/invite/az3ceRmgVe)

![image](https://github.com/user-attachments/assets/8fe9b9e5-9fe4-49c7-b176-6e9c7cf1b192)


这是一项基于QT的监控去除工具

</div>


## 功能
- ✅支持关闭联软监控程序
- ✅支持监控程序运行监测
- ✅支持以最高权限关闭应用
- ✅支持关闭隐藏中的应用
- ✅支持恢复监控程序

## 关闭监控后您可以
- ✅插拔U盘
- ✅去除水印
- ✅连接WIFI
- ✅密码设置不再受限
- ✅网络进程不再被监控
- ✅您的账户不再被监控管理
- ✅监控程序不再记录您的操作日志
- ✅您的网络操作不再上传至监控服务器

## 原理说明
本程序源码公开透明，本程序原理是执行以下命令关闭监控应用，并在此基础上添加了恢复监控应用和监控应用检查功能
```
taskkill /f /im UniAccessAgentTray.exe
taskkill /f /im UniAccessAgentDaemon.exe
taskkill /f /im UniAccessAgent.exe
taskkill /f /im SRClient.exe
taskkill /f /im GetCorbicula.exe
taskkill /f /im Tinaiat.exe
taskkill /f /im LVFS_Client.exe
taskkill /f /im DLPService.exe
taskkill /f /im DLPOCR.exe
taskkill /f /im DLPExtend.exe
taskkill /f /im DLPCheck.exe
taskkill /f /im FileDownloader.exe
taskkill /f /im LvaNac.exe
taskkill /f /im lvnetcheck.exe
taskkill /f /im LvVulEngine.exe
```
如遇问题，请向我提出issues
## 喜欢这个项目，请为我点个Star ⭐ 

[![Star History Chart](https://api.star-history.com/svg?repos=JasonYANG170/Fuck-Monitor&type=Date)](https://star-history.com/#star-history/star-history&Date)








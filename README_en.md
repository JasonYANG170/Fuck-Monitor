[简体中文](README.md) | [English](README_en.md)

<div align="center">
    <h1>Fuck-Monitor</h1>


![Static Badge](https://img.shields.io/badge/License-NO-green?style=for-the-badge)
![Commit Activity](https://img.shields.io/github/commit-activity/w/JasonYANG170/Fuck-Monitor?style=for-the-badge&color=yellow)
![Languages Count](https://img.shields.io/github/languages/count/JasonYANG170/Fuck-Monitor?logo=c&style=for-the-badge)

[![Discord](https://img.shields.io/discord/978108215499816980?style=social&logo=discord&label=echosec)](https://discord.com/invite/az3ceRmgVe)

![image](https://github.com/user-attachments/assets/8fe9b9e5-9fe4-49c7-b176-6e9c7cf1b192)


A Qt-based tool for stopping monitoring applications.

</div>


## Features
- ✅Stop UniAccess monitoring applications
- ✅Detect whether monitoring applications are running
- ✅Stop applications with elevated privileges
- ✅Support closing hidden applications
- ✅Restore monitoring applications

## After turning off monitoring, you can
- ✅Connect and disconnect USB drives
- ✅Remove watermark
- ✅Connect to WIFI
- ✅Password settings are no longer restricted
- ✅Network processes are no longer monitored
- ✅Your account is no longer monitored and managed
- ✅The monitoring program will no longer record your operation logs
- ✅Your network operations are no longer uploaded to the monitoring server

## Principle description
The source code of this program is open and transparent. The principle of this program is to execute the following command to close the monitoring application, and on this basis, it adds the functions of restoring the monitoring application and monitoring application inspection.
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
If you encounter any problems, please submit issues to me
## If you like this project, please give me a star ⭐

[![Star History Chart](https://api.star-history.com/svg?repos=JasonYANG170/Fuck-Monitor&type=Date)](https://star-history.com/#star-history/star-history&Date)








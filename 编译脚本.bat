@echo off
cd /d D:/Desktop/OOP
g++ 1.cpp -o 1.exe
if exist "1.exe" echo ����ɹ�
if not exist "1.exe" echo ����ʧ��
pause
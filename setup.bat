@echo off
set MINGW_PATH=C:\MinGW
title Setup GLUT MinGW

if /I "%CD%"=="%WINDIR%\system32" goto :main
echo you need to run as administrator to do this
pause
goto :EOF

:main
pushd %~dp0
xcopy /E /I /Y "%CD%\resources\freeglut" "%MINGW_PATH%\freeglut"
xcopy /E /I /Y "%CD%\resources\freeglut\include\GL" "%MINGW_PATH%\include\GL"
copy /B /Y "%CD%\resources\freeglut\bin\x64\freeglut.dll" "%windir%\SysWOW64\freeglut.dll"
copy /B /Y "%CD%\resources\freeglut\bin\freeglut.dll" "%windir%\System32\freeglut.dll"

echo setup done..
pause



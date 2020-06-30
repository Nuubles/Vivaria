@echo off
mkdir buildtools

set SDL2=SDL2-devel-2.0.12-VC.zip
set DOWNLOAD_DIR=%cd%\buildtools

:: Install vcpkg
mkdir %DOWNLOAD_DIR%\vcpkg
cd %DOWNLOAD_DIR%\vcpkg
:: 67ab613
git clone https://github.com/microsoft/vcpkg.git
cd .\vcpkg\
.\bootstrap-vcpkg.bat
.\vcpkg integrate install
set VCPKG=%DOWNLOAD_DIR%\vcpkg\vcpkg\vcpkg.exe
cd ..\..\

:: Install SDL2 using vcpkg
%VCPKG% install sdl2:x86-windows & :: 2.0.12-1
%VCPKG% install sdl2:x64-windows & :: 2.0.12-1

@echo on
echo Installed buildtools
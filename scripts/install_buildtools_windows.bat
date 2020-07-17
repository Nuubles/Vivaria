@echo off
mkdir includes

set SDL2=SDL2-devel-2.0.12-VC.zip
set DOWNLOAD_DIR=%cd%\includes
set OUTPUT_DIR=%cd%\includes\SDL2

wget "https://libsdl.org/release/%SDL2%" -P "%DOWNLOAD_DIR%"

7z x "%DOWNLOAD_DIR%\%SDL2%" -y -o%OUTPUT_DIR%

del /F /Q %DOWNLOAD_DIR%\%SDL2%

@echo on
echo Installed buildtools
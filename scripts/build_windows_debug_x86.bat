mkdir build
cmake -G Ninja -S .\src\ -B .\build\ -DCMAKE_BUILD_TYPE=Debug -DCMAKE_TOOLCHAIN_FILE=%cd%\buildtools\vcpkg\vcpkg\scripts\buildsystems\vcpkg.cmake
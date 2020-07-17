mkdir build

cmake -G "MinGW Makefiles" -S .\src\ -B .\build\  ^
-DCMAKE_BUILD_TYPE=Release  ^
-DBITSIZE=x86  ^
-DCMAKE_CXX_COMPILER=mingw32-g++.exe  ^
-DCMAKE_MAKE_PROGRAM=mingw32-make.exe ..

cd .\build\
mingw32-make

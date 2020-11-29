# CustomDLL_ExecCMD

Compile :

i686-w64-mingw32-g++ -c -DBUILDING_EXAMPLE_DLL CustomDLL.cpp

i686-w64-mingw32-g++ -shared -o CustomDLL.dll CustomDLL.o -Wl,--out-implib,CustomDLL.a

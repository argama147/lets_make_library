# 動作条件

* ライブラリ作成プログラム言語
  * C++
* ライブラリ使用プログラム言語
  * C++
* ライブラリの種類/リンク方法
  * 動的ライブラリ/動的ロード
* ライブラリの拡張子
  * dll
* ビルドの記述方法
  * Makefile
* 動作環境
  * MinGW

# MinGW実行ログ

```
$ cd /C/make_library/Cpp/DynamicLoad_mingw/makeLibrary/
$ mingw32-make.exe clean;mingw32-make.exe
rm -f *.o *~ hello.dll
g++ -O3 -Wall -shared -fPIC -I./include -o hello.dll ./src/word.cpp
$ ls
hello.dll*  include/  Makefile  src/
$ export PATH=$PATH:$PWD
$ cd ../useLibrary/
$ mingw32-make.exe clean;mingw32-make.exe
rm -f *.o *~ HelloWorld *.so
g++ -O3 -Wall -fPIC -I../makeLibrary/include -o HelloWorld -I./include main.cpp
$ ls
HelloWorld.exe*  main.cpp  main.h  Makefile
$ ./HelloWorld.exe
LoadLibrary() success
GetProcAddress createInstance() success
GetProcAddress deleteInstance() success
called createInstance()
called Word Constructor
Hello,World!
called deleteInstance()
called Word Destructor
FreeLibrary()
```

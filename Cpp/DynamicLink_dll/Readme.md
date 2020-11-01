# 動作条件

* ライブラリ作成プログラム言語
  * C++
* ライブラリ使用プログラム言語
  * C++
* ライブラリの種類/リンク方法
  * 動的ライブラリ/動的リンク
* ライブラリの拡張子
  * dll
* ビルドの記述方法
  * Makefile
* 動作環境
  * Cygwin
  * MinGW

# Cygwinの実行ログ

```
$ cd /cygdrive/C/make_library/Cpp/DynamicLink_dll/makeLibrary/
$ make clean;make
rm -f *.o *~ libhello.dll
g++ -O3 -Wall -shared -fPIC -I./include -o libhello.dll src/word.cpp
$ ls
include  libhello.dll  Makefile  src
$ export PATH=$PATH:$PWD
$ cd ../useLibrary/
$ make clean;make
rm -f *.o *~ HelloWorld
g++ -O3 -Wall -I../makeLibrary/include -o HelloWorld main.cpp -L../makeLibrary/ -lhello
$ ls
HelloWorld.exe  main.cpp  Makefile
$ ./HelloWorld.exe
Hello,World!
```

# MinGWの実行ログ

```
$ cd /C/make_library/Cpp/DynamicLink_dll/makeLibrary/
$ mingw32-make.exe clean;mingw32-make.exe
rm -f *.o *~ libhello.dll
g++ -O3 -Wall -shared -fPIC -I./include -o libhello.dll src/word.cpp
$ ls
include/  libhello.dll*  Makefile  src/
$ export PATH=$PATH:$PWD
$ cd ../useLibrary/
$ mingw32-make.exe clean;mingw32-make.exe
rm -f *.o *~ HelloWorld
g++ -O3 -Wall -I../makeLibrary/include -o HelloWorld main.cpp -L../makeLibrary/ -lhello
$ ls
HelloWorld.exe*  main.cpp  Makefile
$ ./HelloWorld.exe
Hello,World!
```


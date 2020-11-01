# 動作条件

* ライブラリ作成プログラム言語
  * C言語
* ライブラリ使用プログラム言語
  * C言語
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
$ cd /cygdrive/C/make_library/C_Makefile/DynamicLink_dll/makeLibrary/
$ make clean
rm -f *.o *~ libhello.dll
$ make
$ ls
include  libhello.dll  Makefile  src
$ cd ../useLibrary/
$ make clean
rm -f *.o *~ HelloWorld
$ make
gcc -O3 -Wall -I../makeLibrary/include -o HelloWorld main.c -L../makeLibrary/ -lhello
$ ls
HelloWorld.exe  main.c  Makefile
$ ./HelloWorld.exe
C:/make_library/C_Makefile/DynamicLink_dll/useLibrary/HelloWorld.exe: error while loading shared libraries: libhello.dll: cannot open shared object file: No such file or directory
$ cd ../makeLibrary/
$ export PATH=$PATH:$PWD
$ cd ../useLibrary/
$ ./HelloWorld.exe
Hello, World!
```

# MinGWの実行ログ

```
$ cd /C/make_library/C_Makefile/DynamicLink_dll/makeLibrary/
$ mingw32-make.exe clean
rm -f *.o *~ libhello.dll
$ mingw32-make.exe
gcc -O3 -Wall -shared -fPIC -I./include -o libhello.dll ./src/word.c
$ ls
include/  libhello.dll*  Makefile  src/
$ cd ../useLibrary/
$ mingw32-make.exe clean
rm -f *.o *~ HelloWorld
$ mingw32-make.exe
gcc -O3 -Wall -I../makeLibrary/include -o HelloWorld main.c -L../makeLibrary/ -lhello
$ ls
HelloWorld.exe*  main.c  Makefile
$ ./HelloWorld.exe
C:/make_library/C_Makefile/DynamicLink_dll/useLibrary/HelloWorld.exe: error while loading shared libraries: libhello.dll: cannot open shared object file: No such file or directory
$ cd ../makeLibrary/
$ export PATH=$PATH:$PWD
$ cd ../useLibrary/
$ ./HelloWorld.exe
Hello, World!
```

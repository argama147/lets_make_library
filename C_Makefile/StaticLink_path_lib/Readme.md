# 動作条件

* ライブラリ作成プログラム言語
  * C言語
* ライブラリ使用プログラム言語
  * C言語
* ライブラリの種類/リンク方法
  * 静的ライブラリ/静的リンク（ファイルパスを使用）
* ライブラリの拡張子
  * lib
* ビルドの記述方法
  * Makefile
* 動作環境
  * Cygwin
  * MinGW

# Cygwinの実行ログ

```
$ cd /cygdrive/C/make_library/C_Makefile/StaticLink_path_lib/makeLibrary/
$ make clean
rm -f *.o *~ hello.lib
$ make
gcc -O3 -Wall -I./include -c -o word.o ./src/word.c
ar rcs hello.lib word.o
$ ls
hello.lib  include  Makefile  src  word.o
$ cd ../useLibrary/
$ make clean
rm -f *.o *~ HelloWorld
$ make
gcc -O3 -Wall -I../makeLibrary/include -c main.c
gcc -o HelloWorld main.o ../makeLibrary/hello.lib
$ ls
HelloWorld.exe  main.c  main.o  Makefile
$ ./HelloWorld.exe
Hello, World!
```

# MinGWの実行ログ

```
$ cd //C/make_library/C_Makefile/StaticLink_path_lib/makeLibrary/
$ mingw32-make.exe clean
rm -f *.o *~ hello.lib
$ mingw32-make.exe
gcc -O3 -Wall -I./include -c -o word.o ./src/word.c
ar rcs hello.lib word.o
$ ls
hello.lib  include/  Makefile  src/  word.o
$ cd ../useLibrary/
$ mingw32-make.exe clean
rm -f *.o *~ HelloWorld
$ mingw32-make.exe
gcc -O3 -Wall -I../makeLibrary/include -c main.c
gcc -o HelloWorld main.o ../makeLibrary/hello.lib
$ ls
HelloWorld.exe*  main.c  main.o  Makefile
$ ./HelloWorld.exe
Hello, World!
```

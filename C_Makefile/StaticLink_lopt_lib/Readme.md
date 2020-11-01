# 動作条件

* ライブラリ作成プログラム言語
  * C言語
* ライブラリ使用プログラム言語
  * C言語
* ライブラリの種類/リンク方法
  * 静的ライブラリ/静的リンク（-lオプションを使用）
* ライブラリの拡張子
  * lib
* ビルドの記述方法
  * Makefile
* 動作環境
  * Cygwin

# Cygwinの実行ログ

```
$ cd /cygdrive/C/make_library/C_Makefile/StaticLink_lopt_lib/makeLibrary/
$ make clean
rm -f *.o *~ libhello.lib
$ make
gcc -O3 -Wall -I./include -c -o word.o ./src/word.c
ar rcs libhello.lib word.o
$ ls
include  libhello.lib  Makefile  src  word.o
$ cd ../useLibrary/
$ make clean
rm -f *.o *~ HelloWorld
$ make
rm -f *.o *~ HelloWorld
gcc -O3 -Wall -I../makeLibrary/include -c main.c
gcc -o HelloWorld main.o -L../makeLibrary/ -lhello
$ ls
HelloWorld.exe  main.c  main.o  Makefile
$ ./HelloWorld.exe
Hello, World!
```

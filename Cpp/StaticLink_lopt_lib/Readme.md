# 動作条件

* ライブラリ作成プログラム言語
  * C++
* ライブラリ使用プログラム言語
  * C++
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
$ cd /cygdrive/C/make_library/Cpp/StaticLink_lopt_lib/makeLibrary/
$ make clean;make
rm -f *.o *~ libhello.lib
g++ -O3 -Wall -I./include -I./include -c -o word.o src/word.cpp
ar rcs libhello.lib word.o
$ ls
include  libhello.lib  Makefile  src  word.o
$ cd ../useLibrary/
$ make clean;make
rm -f *.o *~ HelloWorld
g++ -O3 -Wall -I../makeLibrary/include -c main.cpp
g++ -O3 -Wall -I../makeLibrary/include -o HelloWorld main.o -L../makeLibrary/ -lhello
$ ls
HelloWorld.exe  main.cpp  main.o  Makefile
$ ./HelloWorld.exe
Hello,World!
```

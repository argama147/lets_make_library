# 動作条件

* ライブラリ作成プログラム言語
  * C言語
* ライブラリ使用プログラム言語
  * C言語
* ライブラリの種類/リンク方法
  * 動的ライブラリ/動的リンク
* ライブラリの拡張子
  * so
* ビルドの記述方法
  * Makefile
* 動作環境
  * Ubuntu

# Ubuntuの実行ログ

```
$ cd make_library/rpath/ubuntu/makeLibrary/
$ make clean;make
rm -f *.o *~ libhello.so
gcc -O3 -Wall -shared -fPIC -I./include -o libhello.so ./src/word.c
$ ls
Makefile  include  libhello.so  src
$ cd ../useLibrary/
$ make clean;make
rm -f *.o *~ HelloWorld
gcc -O3 -Wall -I../makeLibrary/include -o HelloWorld main.c -L../makeLibrary/ -lhello -Wl,-rpath,../makeLibrary
$ ls
HelloWorld  Makefile  main.c
$ ./HelloWorld 
Hello, World!
```

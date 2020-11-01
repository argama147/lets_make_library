# 動作条件

* ライブラリ作成プログラム言語
  * C言語
* ライブラリ使用プログラム言語
  * C言語
* ライブラリの種類/リンク方法
  * 動的ライブラリ/動的リンク
* ライブラリの拡張子
  * dylib
* ビルドの記述方法
  * Makefile
* 動作環境
  * macOS

# macOSの実行ログ

```
$ cd make_library/rpath/macOS/makeLibrary
$ make clean;make
rm -f *.o *~ libhello.dylib
gcc -O3 -Wall -dynamiclib -I./include -install_name @rpath/libhello.dylib -o libhello.dylib ./src/word.c
$ ls
Makefile	include		libhello.dylib	src
$ cd ../useLibrary/
$ make clean;make
rm -f *.o *~ HelloWorld
gcc -O3 -Wall -I../makeLibrary/include -o HelloWorld main.c -L../makeLibrary/ -lhello -Wl,-rpath,../makeLibrary
$ ./HelloWorld 
Hello, World!
```

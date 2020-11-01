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
$ cd make_library/C_Makefile/DynamicLink_dylib/makeLibrary/
$ make clean
rm -f *.o *~ libhello.dylib
$ make
gcc -O3 -Wall -dynamiclib -I./include -o libhello.dylib ./src/word.c
$ ls
Makefile	include		libhello.dylib	src
$ export DYLD_LIBRARY_PATH=$DYLD_LIBRARY_PATH:$PWD
$ cd ../useLibrary/
$ make clean
rm -f *.o *~ HelloWorld
$ make
gcc -O3 -Wall -I../makeLibrary/include -o HelloWorld main.c -L../makeLibrary/ -lhello
$ ls
HelloWorld	Makefile	main.c
$ ./HelloWorld 
Hello, World!
```

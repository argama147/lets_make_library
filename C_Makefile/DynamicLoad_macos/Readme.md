# 動作条件

* ライブラリ作成プログラム言語
  * C言語
* ライブラリ使用プログラム言語
  * C言語
* ライブラリの種類/リンク方法
  * 動的ライブラリ/動的ロード
* ライブラリの拡張子
  * bundle
* ビルドの記述方法
  * Makefile
* 動作環境
  * macOS

# macOSの実行ログ

```
$ cd make_library/C_Makefile/DynamicLoad_macos/makeLibrary/
$ make clean
rm -f *.o *~ hello.bundle
$ make
gcc -O3 -Wall -bundle -fPIC -I./include -o hello.bundle src/word.c
$ ls
Makefile	hello.bundle	include		src
$ export DYLD_LIBRARY_PATH=$DYLD_LIBRARY_PATH:$PWD
$ cd ../useLibrary/
$ make clean
rm -f *.o *~ HelloWorld
$ make
gcc -O3 -Wall -I../makeLibrary/include -o HelloWorld main.c
$ ls
HelloWorld	Makefile	main.c		main.h
$ ./HelloWorld 
Hello, World!
```

# 動作条件

* ライブラリ作成プログラム言語
  * C++
* ライブラリ使用プログラム言語
  * C++
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
$ cd make_library/Cpp/DynamicLink_dylib/makeLibrary/
$ make clean;make
rm -f *.o *~ libhello.dylib
g++ -O3 -Wall -dynamiclib -fPIC -I./include -o libhello.dylib src/word.cpp
$ ls
Makefile	include		libhello.dylib	src
$ export DYLD_LIBRARY_PATH=$DYLD_LIBRARY_PATH:$PWD
$ cd ../useLibrary/
$ make clean;make
rm -f *.o *~ HelloWorld
g++ -O3 -Wall -I../makeLibrary/include -o HelloWorld main.cpp -L../makeLibrary/ -lhello
$ ls
HelloWorld	Makefile	main.cpp
$ ./HelloWorld 
Hello,World!
```

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
$ cd make_library/C_Makefile/DynamicLink_so/makeLibrary/
$ make clean
rm -f *.o *~ libhello.so
$ make
gcc -O3 -Wall -shared -fPIC -I./include -o libhello.so ./src/word.c
$ ls
Makefile  include  libhello.so  src
$ cd ../useLibrary/
$ make clean
rm -f *.o *~ HelloWorld
$ make
gcc -O3 -Wall -I../makeLibrary/include -o HelloWorld main.c -L../makeLibrary/ -lhello
$ ls
HelloWorld  Makefile  main.c
$ ./HelloWorld 
./HelloWorld: error while loading shared libraries: libhello.so: cannot open shared object file: No such file or directory
$ cd ../makeLibrary/
$ export LD_LIBRARY_PATH=$LID_LIBRARY_PAH:$PWD
$ cd ../useLibrary/
$ ./HelloWorld 
Hello, World!
```

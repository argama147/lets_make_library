# 動作条件

* ライブラリ作成プログラム言語
  * C言語
* ライブラリ使用プログラム言語
  * C言語
* ライブラリの種類/リンク方法
  * 動的ライブラリ/動的ロード
* ライブラリの拡張子
  * dll
* ビルドの記述方法
  * Makefile
* 動作環境
  * Cygwin

# Cygwinの実行ログ

```
$ cd /cygdrive/C/make_library/C_Makefile/DynamicLoad_cygwin/makeLibrary/
$ make clean
rm -f *.o *~ libhello.dll
$ make
gcc -O3 -Wall -shared -fPIC -I./include -o libhello.dll src/word.c
$ ls
include  libhello.dll  Makefile  src
$ export PATH=$PATH:$PWD
$ cd ../useLibrary/
$ make clean
rm -f *.o *~ HelloWorld
$ make
gcc -O3 -Wall -I../makeLibrary/include -o HelloWorld main.c
$ ls
HelloWorld.exe  main.c  Makefile
$ ./HelloWorld.exe
Hello, World!
```

# 動作条件

* ライブラリ作成プログラム言語
  * C言語
* ライブラリ使用プログラム言語
  * C言語
* ライブラリの種類/リンク方法
  * 動的ライブラリ/動的ロード
* ライブラリの拡張子
  * so
* ビルドの記述方法
  * Makefile
* 動作環境
  * Ubuntu

# Ubuntuの実行ログ

```
$ cd make_library/C_Makefile/DynamicLoad_ubuntu/makeLibrary/
$ make clean
rm -f *.o *~ hello.so
$ make
gcc -O3 -Wall -shared -fPIC -I./include -o hello.so src/word.c
$ ls
Makefile  hello.so  include  src
$ export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$PWD
$ cd ../useLibrary/
$ make clean
rm -f *.o *~ HelloWorld
$ make
gcc -O3 -Wall -I../makeLibrary/include main.c -ldl -o HelloWorld
$ ./HelloWorld 
Hello, World!
```

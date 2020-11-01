# 動作条件

* ライブラリ作成プログラム言語
  * C++
* ライブラリ使用プログラム言語
  * C++
* ライブラリの種類/リンク方法
  * 静的ライブラリ/静的リンク（ファイルパスを使用）
* ライブラリの拡張子
  * lib
* ビルドの記述方法
  * Makefile
* 動作環境
  * Cygwin
  * MinGW

# Cygwinの実行ログ

```
$ cd /cygdrive/C/make_library/Cpp/StaticLink_path_lib/makeLibrary/
$ make clean;make
rm -f *.o *~ hello.lib
g++ -O3 -Wall -I./include -c -o word.o src/word.cpp
ar rcs hello.lib word.o
$ ls
hello.lib  include  Makefile  src  word.o
$ cd ../useLibrary/
$ make clean;make
rm -f *.o *~ HelloWorld
g++ -O3 -Wall -I../makeLibrary/include -c main.cpp
g++ -O3 -Wall -I../makeLibrary/include -o HelloWorld main.o ../makeLibrary/hello.lib
$ ls
HelloWorld.exe  main.cpp  main.o  Makefile
$ ./HelloWorld.exe
Hello,World!
```


# MinGWの実行ログ

```
$ cd /C/make_library/Cpp/StaticLink_path_lib/makeLibrary/
$ mingw32-make.exe clean;mingw32-make.exe
rm -f *.o *~ hello.lib
g++ -O3 -Wall -I./include -c -o word.o src/word.cpp
ar rcs hello.lib word.o
$ ls
hello.lib  include/  Makefile  src/  word.o
$ cd ../useLibrary/
$ mingw32-make.exe clean;mingw32-make.exe
rm -f *.o *~ HelloWorld
g++ -O3 -Wall -I../makeLibrary/include -c main.cpp
g++ -O3 -Wall -I../makeLibrary/include -o HelloWorld main.o ../makeLibrary/hello.lib
$ ls
HelloWorld.exe*  main.cpp  main.o  Makefile
$ ./HelloWorld.exe
Hello,World!
```

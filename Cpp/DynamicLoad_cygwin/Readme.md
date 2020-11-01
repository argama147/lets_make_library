# 動作条件

* ライブラリ作成プログラム言語
  * C++
* ライブラリ使用プログラム言語
  * C++
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
$ cd /cygdrive/C/make_library/Cpp/DynamicLoad_cygwin/makeLibrary/
$ make clean;make
rm -f *.o *~ hello.dll
g++ -O3 -Wall -shared -fPIC -I./include -o hello.dll ./src/word.cpp
$ ls
hello.dll  include  Makefile  src
$ export PATH=$PATH:$PWD
$ cd ../useLibrary/
$ make clean;make
rm -f *.o *~ HelloWorld *.so
g++ -O3 -Wall -fPIC -I../makeLibrary/include -o HelloWorld -I./include main.cpp
$ ls
HelloWorld.exe  main.cpp  main.h  Makefile
$ ./HelloWorld.exe
dlopen() success
get createInstance() handle success
get deleteInstance() handle success
called createInstance()
called Word Constructor
Hello,World!
called deleteInstance()
called Word Destructor
dlclose()
```


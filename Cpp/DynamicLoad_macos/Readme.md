# 動作条件

* ライブラリ作成プログラム言語
  * C++
* ライブラリ使用プログラム言語
  * C++
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
$ cd make_library/Cpp/DynamicLoad_macos/makeLibrary/
$ make clean;make
rm -f *.o *~ hello.bundle
g++ -O3 -Wall -shared -fPIC -I./include -o hello.bundle ./src/word.cpp
In file included from ./src/word.cpp:2:
./include/word.h:8:27: warning: 'override' keyword is a C++11 extension [-Wc++11-extensions]
    const char* getWord() override;
                          ^
1 warning generated.
$ ls
Makefile	hello.bundle	hello.so	include		src
$ export DYLD_LIBRARY_PATH=$DYLD_LIBRARY_PATH:$PWD
$ cd ../useLibrary/
$ make clean;make
rm -f *.o *~ HelloWorld
g++ -O3 -Wall -I../makeLibrary/include main.cpp -o HelloWorld
In file included from main.cpp:1:
../makeLibrary/include/word.h:8:27: warning: 'override' keyword is a C++11 extension [-Wc++11-extensions]
    const char* getWord() override;
                          ^
1 warning generated.
$ ls
HelloWorld	Makefile	main.cpp	main.h
$ ./HelloWorld 
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



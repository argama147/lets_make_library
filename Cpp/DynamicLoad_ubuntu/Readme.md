# 動作条件

* ライブラリ作成プログラム言語
  * C++
* ライブラリ使用プログラム言語
  * C++
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
$ cd make_library/Cpp/DynamicLoad_ubuntu/makeLibrary/
$ make clean;make
rm -f *.o *~ hello.so
g++ -O3 -Wall -shared -fPIC -I./include -o hello.so ./src/word.cpp
$ ls
Makefile  hello.so  include  src
$ export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$PWD
argama147@argama147:~/make_library/Cpp/DynamicLoad_ubuntu/makeLibrary$ cd ../useLibrary/
argama147@argama147:~/make_library/Cpp/DynamicLoad_ubuntu/useLibrary$ make clean;make
rm -f *.o *~ HelloWorld
g++ -O3 -Wall -I../makeLibrary/include main.cpp -ldl -o HelloWorld
$ ls
HelloWorld  Makefile  main.cpp  main.h
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



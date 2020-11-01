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
  * MinGW

# MinGWの実行ログ

```
$ cd /C/make_library/C_Makefile/DynamicLoad_mingw/makeLibrary/
$ mingw32-make.exe clean
rm -f *.o *~ hello.dll
$ mingw32-make.exe
gcc -O3 -Wall -shared -fPIC -I./include -o hello.dll src/word.c
$ ls
hello.dll*  include/  Makefile  src/
$ export PATH=$PATH:$PWD
$ cd ../useLibrary/
$ mingw32-make.exe clean
rm -f *.o *~ HelloWorld
$ mingw32-make.exe
gcc -O3 -Wall -I../makeLibrary/include -o HelloWorld main.c
$ ls
HelloWorld.exe*  main.c  Makefile
$ ./HelloWorld.exe
Hello, World!
```

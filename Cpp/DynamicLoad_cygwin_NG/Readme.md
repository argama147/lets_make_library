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
$ cd /cygdrive/C/make_library/Cpp/DynamicLoad_cygwin_NG/makeLibrary/
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
/usr/lib/gcc/x86_64-pc-cygwin/9.3.0/../../../../x86_64-pc-cygwin/bin/ld: /tmp/ccX5FEog.o:main.cpp:(.text.startup+0x16b): undefined reference to `Word::getWord()'
/tmp/ccX5FEog.o:main.cpp:(.text.startup+0x16b): relocation truncated to fit: R_X86_64_PC32 against undefined symbol `Word::getWord()'
collect2: エラー: ld はステータス 1 で終了しました
make: *** [Makefile:9: HelloWorld] エラー 1
```


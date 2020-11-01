# 動作条件

* ライブラリ作成プログラム言語
  * C言語
* ライブラリ使用プログラム言語
  * C言語
* ライブラリの種類/リンク方法
  * 静的ライブラリ/静的リンク（ファイルパスを使用）
* ライブラリの拡張子
  * a
* ビルドの記述方法
  * Makefile
* 動作環境
  * Cygwin
  * Ubuntu
  * macOS
  * MinGW

# Cygwinの実行ログ

```
$ cd /cygdrive/C/make_library/C_Makefile/StaticLink_path_a/makeLibrary/
$ make clean
rm -f *.o *~ hello.a
$ make
gcc -O3 -Wall -I./include -c -o word.o ./src/word.c
ar rcs hello.a word.o
$ ls
hello.a  include  Makefile  src  word.o
$ cd ../useLibrary/
$ make clean
rm -f *.o *~ HelloWorld
$ make
gcc -O3 -Wall -I../makeLibrary/include -c main.c
gcc -o HelloWorld main.o ../makeLibrary/hello.a
$ ls
HelloWorld.exe  main.c  main.o  Makefile
$ ./HelloWorld.exe
Hello, World!
```

# Ubuntuの実行ログ

```
$ cd make_library/C_Makefile/StaticLink_path_a/makeLibrary/
$ make clean
rm -f *.o *~ hello.a
$ make
gcc -O3 -Wall -I./include -c -o word.o ./src/word.c
ar rcs hello.a word.o
$ ls
Makefile  hello.a  include  src  word.o
$ cd ../useLibrary/
$ make clean
rm -f *.o *~ HelloWorld
$ make
gcc -O3 -Wall -I../makeLibrary/include -c main.c
gcc -o HelloWorld main.o ../makeLibrary/hello.a
/make_library/C_Makefile/StaticLink_path_a/useLibrary$ ls
HelloWorld  Makefile  main.c  main.o
$ ./HelloWorld 
Hello, World!
```

# macOSの実行ログ

```
$ cd make_library/C_Makefile/StaticLink_path_a/makeLibrary/
$ make clean
rm -f *.o *~ hello.a
$ make
gcc -O3 -Wall -I./include -c -o word.o ./src/word.c
ar rcs hello.a word.o
$ ls
Makefile	hello.a		include		src		word.o
$ cd ../useLibrary/
$ make clean
rm -f *.o *~ HelloWorld
$ make
gcc -O3 -Wall -I../makeLibrary/include -c main.c
gcc -o HelloWorld main.o ../makeLibrary/hello.a
$ ls
HelloWorld	Makefile	main.c		main.o
$ ./HelloWorld 
Hello, World!
```


# MinGWの実行ログ

```
$ cd /C/make_library/C_Makefile/StaticLink_path_a/makeLibrary/
$ mingw32-make.exe clean;mingw32-make.exe
rm -f *.o *~ hello.a
gcc -O3 -Wall -I./include -c -o word.o ./src/word.c
ar rcs hello.a word.o
$ ls
hello.a  include/  Makefile  src/  word.o
$ cd ../useLibrary/
$ mingw32-make.exe clean;mingw32-make.exe
rm -f *.o *~ HelloWorld
gcc -O3 -Wall -I../makeLibrary/include -c main.c
gcc -o HelloWorld main.o ../makeLibrary/hello.a
$ ls
HelloWorld.exe*  main.c  main.o  Makefile
$ ./HelloWorld.exe
Hello, World!
```

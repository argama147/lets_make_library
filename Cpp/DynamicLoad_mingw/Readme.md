# �������

* ���C�u�����쐬�v���O��������
  * C++
* ���C�u�����g�p�v���O��������
  * C++
* ���C�u�����̎��/�����N���@
  * ���I���C�u����/���I���[�h
* ���C�u�����̊g���q
  * dll
* �r���h�̋L�q���@
  * Makefile
* �����
  * MinGW

# MinGW���s���O

```
$ cd /C/make_library/Cpp/DynamicLoad_mingw/makeLibrary/
$ mingw32-make.exe clean;mingw32-make.exe
rm -f *.o *~ hello.dll
g++ -O3 -Wall -shared -fPIC -I./include -o hello.dll ./src/word.cpp
$ ls
hello.dll*  include/  Makefile  src/
$ export PATH=$PATH:$PWD
$ cd ../useLibrary/
$ mingw32-make.exe clean;mingw32-make.exe
rm -f *.o *~ HelloWorld *.so
g++ -O3 -Wall -fPIC -I../makeLibrary/include -o HelloWorld -I./include main.cpp
$ ls
HelloWorld.exe*  main.cpp  main.h  Makefile
$ ./HelloWorld.exe
LoadLibrary() success
GetProcAddress createInstance() success
GetProcAddress deleteInstance() success
called createInstance()
called Word Constructor
Hello,World!
called deleteInstance()
called Word Destructor
FreeLibrary()
```

TARGET        = HelloWorld
CC            = g++
OBJ           = main.o
LIB           = ../makeLibrary/hello.a
SRC           = main.cpp
CFLAGS        = -O3 -Wall -I../makeLibrary/include


all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^ $(LIB)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

.PHONY: clean

clean:; rm -f *.o *~ $(TARGET)


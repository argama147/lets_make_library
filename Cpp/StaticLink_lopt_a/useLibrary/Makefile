TARGET        = HelloWorld
CC            = g++
OBJ           = main.o
LDFLAGS       = -L../makeLibrary/
LIB           = -lhello
SRC           = main.cpp
CFLAGS        = -O3 -Wall -I../makeLibrary/include


all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS) $(LIB)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

.PHONY: clean

clean:; rm -f *.o *~ $(TARGET)


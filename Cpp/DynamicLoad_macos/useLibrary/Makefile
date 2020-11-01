TARGET        = HelloWorld
CC            = g++
CFLAGS        = -O3 -Wall -I../makeLibrary/include
SRC           = main.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $^ -o $@

.PHONY: clean

clean:; rm -f *.o *~ $(TARGET)


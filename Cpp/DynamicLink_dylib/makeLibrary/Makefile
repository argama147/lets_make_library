TARGET        = libhello.dylib
CC            = g++
CFLAGS        = -O3 -Wall -dynamiclib -fPIC -I./include
OBJS          = word.o
SRC           = ./src/word.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean

clean:; rm -f *.o *~ $(TARGET)

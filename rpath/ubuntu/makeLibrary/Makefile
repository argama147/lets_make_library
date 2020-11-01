TARGET        = libhello.so
CC            = gcc
CFLAGS        = -O3 -Wall -shared -fPIC -I./include
OBJS          = word.o
SRC           = ./src/word.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

.PHONY: clean

clean:; rm -f *.o *~ $(TARGET)


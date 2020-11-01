TARGET        = HelloWorld
CC            = gcc
CFLAGS        = -O3 -Wall -I../makeLibrary/include
SRC           = main.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean

clean:; rm -f *.o *~ $(TARGET)


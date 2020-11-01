TARGET        = HelloWorld
CC            = gcc
CFLAGS        = -O3 -Wall -I../makeLibrary/include
LIBS          = -ldl
SRC           = main.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $^ $(LIBS) -o $@

.PHONY: clean

clean:; rm -f *.o *~ $(TARGET)


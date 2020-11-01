TARGET = HelloWorld
CC     = gcc
CFLAGS = -O3 -Wall -I../makeLibrary/include
OBJS   = main.o
LIBS   = ../makeLibrary/hello.lib
SRC    = main.c

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS) $(LIBS)

$(OBJS): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

.PHONY: clean

clean:; rm -f *.o *~ $(TARGET)


TARGET        = HelloWorld
CC            = gcc
CFLAGS        = -O3 -Wall -I../makeLibrary/include
LDFLAGS       = -L../makeLibrary/
LIBS          = -lhello
OBJS          = main.o
SRC           = main.c

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS) $(LDFLAGS) $(LIBS)

$(OBJS): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

.PHONY: clean

clean:; rm -f *.o *~ $(TARGET)


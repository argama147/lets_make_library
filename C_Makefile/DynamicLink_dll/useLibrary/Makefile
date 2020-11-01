TARGET        = HelloWorld
CC            = gcc
CFLAGS        = -O3 -Wall -I../makeLibrary/include
LDFLAGS       = -L../makeLibrary/
LIBS          = -lhello
SRC           = main.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS) $(LIBS)

.PHONY: clean

clean:; rm -f *.o *~ $(TARGET)

TARGET        = HelloWorld
CC            = g++
CFLAGS        = -O3 -Wall -I../makeLibrary/include
LDFLAGS       = -L../makeLibrary/
LIBS          = -lhello
SRC           = main.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS) $(LIBS)

.PHONY: clean

clean:; rm -f *.o *~ $(TARGET)

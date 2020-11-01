TARGET        = HelloWorld
CC            = g++
CFLAGS        = -O3 -Wall -I../makeLibrary/include
LIBS          = -ldl
SRC           = main.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $^ $(LIBS) -o $@

.PHONY: clean

clean:; rm -f *.o *~ $(TARGET)


TARGET        = HelloWorld
CC            = g++
SRC           = main.cpp
CFLAGS        = -O3 -Wall -fPIC -I../makeLibrary/include

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) -I./include $(SRC)

clean:; rm -f *.o *~ $(TARGET) *.so


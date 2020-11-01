TARGET        = libhello.a
CC            = g++
AR            = ar rcs
CFLAGS        = -O3 -Wall -I./include
OBJS          = word.o
SRC           = ./src/word.cpp


all: $(TARGET)

$(TARGET): $(OBJS)
	$(AR) $@ $^

$(OBJS): $(SRC)
	$(CC) $(CFLAGS) -c -o $@ $^

.PHONY: clean

clean:; rm -f *.o *~ $(TARGET)

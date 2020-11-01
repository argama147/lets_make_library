TARGET        = libhello.a
CC            = gcc
AR            = ar rcs
CFLAGS        = -O3 -Wall -I./include
OBJS          = word.o
SRC           = ./src/word.c

all: $(TARGET)

$(TARGET): $(OBJS)
	$(AR) $@ $^

$(OBJS): $(SRC)
	$(CC) $(CFLAGS) -c -o $(OBJS) $(SRC)

.PHONY: clean

clean:; rm -f *.o *~ $(TARGET)


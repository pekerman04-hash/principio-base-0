CC = gcc
CFLAGS = -Wall -O3 -march=native -flto
TARGET = base0_core.cgi

all: $(TARGET)

$(TARGET): base0_core.c base0_core.h
	$(CC) $(CFLAGS) base0_core.c -o $(TARGET) -lm

clean:
	rm -f $(TARGET)

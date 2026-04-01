CC = gcc
CFLAGS = -Wall -g 
TARGET = obfuscator
SRC = obfuscator.c

all:$(TARGET)

$(TARGET):$(SRC)
	clear && make clean && $(CC) $(CFLAGS) $(SRC) -o $(TARGET) && clear && ./$(TARGET)

clean:
	rm -f $(TARGET)
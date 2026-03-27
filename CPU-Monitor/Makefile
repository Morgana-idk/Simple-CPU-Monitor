CC = gcc
CFLAGS = -Wall -g
TARGET = CPU-Monitor-Compilated
SRC = CPU-Monitor-Main.c

all:$(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
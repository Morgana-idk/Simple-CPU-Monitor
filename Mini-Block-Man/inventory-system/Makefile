CC = gcc
CFLAGS = -Wall -g 
TARGET = inv
SRC = inventory.c

all:$(TARGET)

$(TARGET):$(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) && ./$(TARGET) && clear &

clean:
	rm -f $(TARGET)
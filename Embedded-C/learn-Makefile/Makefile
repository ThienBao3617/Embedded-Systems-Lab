CC = gcc
CFLAGs = -Wall -g
TARGET = test
OBJS = test.o calc.o

all: $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

test.o: test.c calc.h
	$(CC) $(CFLAGS) -c test.c

calc.o: calc.c calc.h
	$(CC) $(CFLAGS) -c calc.c

clean: 
	rm -f $(OBJS) $(TARGET)
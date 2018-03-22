CC=gcc
CCFLAGS=-Wall
LIBS= #include <math.h> will provide all thats needed no other .a libs needed here

mycode: main.o complexmath.o validate.o
	$(CC) -lm $(CCFLAGS) -o $@ $^ $(LIBS) #-lm needed because cbrt function is used(needed to link with math.h)

%.o : %.c
	$(CC) -lm $(CCFLAGS) -c $^ #-lm needed because cbrt function is used (needed to link with math.h)

.PHONY: clean

clean:
	rm -f *.o mycode

CC=gcc #making variables
PREREQ=polygon.o libturtle.a #prerequisites
DEBUGCFLAGS=-g
COMPILERFLAGS=-std=c99 -lm


polygon: $(PREREQ) 							#naming the compiled code name(grayscale) and telling what is needed to make it
	gcc $(COMPILERFLAGS) $^ -o $@
	
square: $(PREREQ) 							#naming the compiled code name(grayscale) and telling what is needed to make it
	gcc $(COMPILERFLAGS) $^ -o $@		
	
polygon.o: polygon.c	#creating an object file
	$(CC) -std=c99 -c $<
	
.PHONY: clean 									#creating a phony target for quick removal of .o files
clean:
	rm *.o 						

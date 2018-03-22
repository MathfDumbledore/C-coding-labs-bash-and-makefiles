CC=gcc #making variables
PREREQ=lab5LinkingGrayscale.o printpgm.o #prerequisites
DEBUGCFLAGS=-g
COMPILERFLAGS=-std=c99

default: grayscale 								#make default will assemble the code without any debug flags

debug: CC+=$(DEBUGCFLAGS) 						#make debug will use -g to assemble the code, -g is useful for the GDB debugger
debug: grayscale

grayscale: $(PREREQ) 							#naming the compiled code name(grayscale) and telling what is needed to make it
	gcc $(COMPILERFLAGS) -o $@ $^
	
lab5LinkingGrayscale.o: lab5LinkingGrayscale.c 	#creating an object file
	$(CC) -c $<

printpgm.o: printpgm.c
	$(CC) -c $< 								#not sure how $< actually works, its not just the first filename because this works
	
.PHONY: clean 									#creating a phony target for quick removal of .o files
clean:
	rm *.o 										#removing all files containing .o from the current directory

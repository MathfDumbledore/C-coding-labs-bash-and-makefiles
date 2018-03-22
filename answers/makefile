CC=gcc
preReq=main.o simulation.o
EXE=relitivisticSim
LDFLAGS=-lm
OPTCFLAGS=-O2
CFLAGS=-Wall
DEBUGCFLAGS=-g

def: $(EXE)

optimise: CFLAGS+=$(OPTCFLAGS)
optimise: $(EXE)

debug: CFLAGS+=$(DEBUGCFLAGS)
debug: $(EXE)


$(EXE): $(preReq)
	$(CC) $(LDFLAGS) -o $@ $^

main.o: main.c
	$(CC) -c $(CFLAGS) main.c
	
simulation.o: simulation.c
	$(CC) -c $(CFLAGS) simulation.c

.PHONY: clean
clean:
	rm *.o


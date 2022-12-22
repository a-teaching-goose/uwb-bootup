CC=g++
FLAG=-Wall
LEAKER1_EXE=mem_leaker_1.x
LEAKER2_EXE=mem_leaker_2.x

all: $(LEAKER1_EXE) $(LEAKER2_EXE) 

mem_leaker_1.o: mem_leaker_1.cpp 
	$(CC) $(FLAG) -c mem_leaker_1.cpp -o mem_leaker_1.o

mem_leaker_2.o: mem_leaker_2.cpp 
	$(CC) $(FLAG) -c mem_leaker_2.cpp -o mem_leaker_2.o

$(LEAKER1_EXE): mem_leaker_1.o
	$(CC) $(FLAG) mem_leaker_1.o -o $(LEAKER1_EXE) 

$(LEAKER2_EXE): mem_leaker_2.o
	$(CC) $(FLAG) mem_leaker_2.o -o $(LEAKER2_EXE) 

clean:
	rm *.x *.o

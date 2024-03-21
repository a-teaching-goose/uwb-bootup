CC=g++
FLAG=-Wall
EXE=css342_sleepy_cat.x

all: $(EXE) 

pet.o: pet.cpp pet.h
	$(CC) $(FLAG) -c pet.cpp -o pet.o

cat.o: cat.cpp cat.h
	$(CC) $(FLAG) -c cat.cpp -o cat.o

main.o: main.cpp 
	$(CC) $(FLAG) -c main.cpp -o main.o

$(EXE): main.o cat.o pet.o
	$(CC) $(FLAG) main.o cat.o pet.o -o $(EXE) 

clean:
	rm *.x *.o

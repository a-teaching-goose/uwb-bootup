CC=g++
FLAG=-Wall
EXE=css342_sleepy_cat.x

all: $(EXE) 

animal.o: animal.cpp animal.h
	$(CC) $(FLAG) -c animal.cpp -o animal.o

cat.o: cat.cpp cat.h
	$(CC) $(FLAG) -c cat.cpp -o cat.o

main.o: main.cpp 
	$(CC) $(FLAG) -c main.cpp -o main.o

$(EXE): main.o cat.o animal.o
	$(CC) $(FLAG) main.o cat.o animal.o -o $(EXE) 

clean:
	rm *.x *.o

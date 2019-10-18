all: main.o structs.o
	gcc -o program main.o structs.o

main.o: main.c structs.h
	gcc -c main.c

structs.o: structs.c
	gcc -c structs.c

run:
	./program

clean:
	rm *.o
	rm *~
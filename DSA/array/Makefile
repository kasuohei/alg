all: main.o array.o
	gcc main.o array.o -o all
main.o: main.c 
	gcc -c main.c  -o main.o
array.o: array.c array.h
	gcc -c array.c -o array.o

clean:
	rm -rf *.o

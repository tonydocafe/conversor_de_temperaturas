binario: main.o graus.o
	gcc main.o graus.o -o main 
main.o: main.c
	gcc -c main.c 
graus.o: graus.c graus.h
	gcc -c graus.c
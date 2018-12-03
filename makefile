mycomp : mycomp.o complex.o
	gcc -g -Wall -ansi -pedantic mycomp.o complex.o -o mycomp
	
mycomp.o : mycomp.c complex.h
	gcc -c -Wall -ansi -pedantic mycomp.c -o mycomp.o

complex.o : complex.c complex.h
	gcc -c -Wall -ansi -pedantic complex.c -lm -o complex.o

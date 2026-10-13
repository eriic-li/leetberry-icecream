.PHONY: run clean

2sum: main.o 2sum.o
	gcc main.o 2sum.o -o 2sum

main.o: main.c 2sum.h
	gcc -c main.c

2sum.o: 2sum.c 2sum.h
	gcc -c 2sum.c

run: 2sum
	./2sum

clean:
	rm -f *.o 2sum

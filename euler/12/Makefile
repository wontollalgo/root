# build an executable named myprog from myprog.c
all: problem.cpp
	cd ../lib && make -f ../lib/Makefile
	g++ -I../lib/ ../lib/eulerlib.o problem.cpp

clean:
	rm a.out

# build an executable named myprog from myprog.c
all: problem.cpp
	cd ../lib && make -f ../lib/Makefile
	g++ -I../lib/ problem.cpp ../lib/eulerlib.o ../lib/NxMNumericMatrix.o

clean:
	rm a.out

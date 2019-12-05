all: day1
	g++ -o output_d1 day1.o

day1:
	g++ -c day1.c

clean:
	rm *.o

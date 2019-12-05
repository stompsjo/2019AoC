all: day1.o
	g++ -o output_d1 day1.o

day1.o: src/day1/day1.c
	g++ -c src/day1/day1.c

clean:
	rm *.o output*

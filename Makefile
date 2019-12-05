all: day1.o day2.o
	g++ -o output_d1 day1.o
	g++ -o output_d2 day2.o

day2.o: src/day2/day2.c
	g++ -c src/day2/day2.c

day1.o: src/day1/day1.c
	g++ -c src/day1/day1.c

clean:
	rm *.o output*

CC =  g++
CFLAGS = -Wall -g


main: main.o cube.o  
	$(CC) $(CFLAGS) -o main main.o cube.o

main.o: main.cpp cube.h 
	$(CC) $(CFLAGS) -c main.cpp 

cube.o: cube.o cube.h
	$(CC) $(CFLAGS) -c cube.cpp


clean:
	rm *.o main

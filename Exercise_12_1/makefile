
all : main.o
	g++ $^ -o bin
	
main.o : main.cpp
	g++ -Wall $^ -c
	
clean :
	rm -f *~ *.o bin

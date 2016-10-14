
all : main.o
	g++ $^ -o bin
	
main.o : main.cpp
	g++ $^ -c
	
clean :
	rm -f *~ main.o bin

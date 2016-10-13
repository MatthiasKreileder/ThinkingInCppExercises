
all : main.o
	g++ $< -o bin

main.o : main.cpp
	g++ main.cpp -c

clean :
	rm -f main.o bin *~

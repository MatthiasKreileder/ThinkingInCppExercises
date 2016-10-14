
all : main.o
	g++ $< -o bin
	
main.o : main.cpp
	g++ $< -c

memoryLayout : memoryLayout.cpp
	g++ -g -c -Wa,-alh $^ >> $(@).txt 
	
clean :
	rm -f *~ *.o bin *.txt

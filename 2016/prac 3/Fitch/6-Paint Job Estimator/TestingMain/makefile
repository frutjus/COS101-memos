test.out: paintTools.o paintJob.cpp
	g++ paintTools.o paintJob.cpp -o test.out
	
paintTools.o: paintTools.cpp paintTools.h
	g++ -c paintTools.cpp
	
run: test.out
	./test.out
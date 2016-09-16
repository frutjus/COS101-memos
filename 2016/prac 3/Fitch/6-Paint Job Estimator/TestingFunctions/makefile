test.out: paintTools.o paintToolsTest.cpp
	g++ paintTools.o paintToolsTest.cpp -o test.out
	
paintTools.o: paintTools.cpp paintTools.h
	g++ -c paintTools.cpp
	
run: test.out
	./test.out
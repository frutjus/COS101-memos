guess.out: guess.cpp
	g++ -static guess.cpp -o guess.out

run: guess.out 5enters.txt
	./guess.out > out.txt
	cat out.txt 5enters.txt

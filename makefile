pa3: main.o account.o money.o
	g++ -std=c++11 -o main.o account.o money.o

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

account.o: account.cpp account.h money.o
	g++ -std=c++11 -c account.cpp account.h money.o

money.o: money.cpp money.h
	g++ -std=c++11 -c money.cpp money.h

clean:
	rm *.o *.h.gch
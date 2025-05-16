all: sistema

sistema: main.o Cliente.o ContaBancaria.o
	g++ -o sistema main.o Cliente.o ContaBancaria.o

main.o: main.cpp Cliente.h ContaBancaria.h
	g++ -c main.cpp

Cliente.o: Cliente.cpp Cliente.h
	g++ -c Cliente.cpp

ContaBancaria.o: ContaBancaria.cpp ContaBancaria.h Cliente.h
	g++ -c ContaBancaria.cpp

clean:
	rm -f *.o sistema

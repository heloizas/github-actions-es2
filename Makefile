all:
	g++ -std=c++17 src/main.cpp src/carro.cpp -o main
	g++ -std=c++17 src/testes.cpp src/carro.cpp -o testes

test:
	chmod +x main
	./mainTest

clean:
	$(RM) main testes

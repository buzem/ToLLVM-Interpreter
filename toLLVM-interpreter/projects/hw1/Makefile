ARGS="file.stm"

all: main

prog: main.o
	@g++ -o main main.o

main.o: main.cpp
	@g++ -c main.cpp -o main.o

token
	
run: main
	@./main ${ARGS}
	
clean:
	@rm main *.o

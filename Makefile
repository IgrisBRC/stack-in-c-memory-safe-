main: main.o stack.o
	clang  -o main main.o stack.o -O2

main.o: main.c stack.h
	clang  -c  main.c -O2

stack.o: stack.c stack.h
	clang  -c stack.c -O2

clean: 
	rm main main.o stack.o

main: main.o stack.o
	clang -g -o main main.o stack.o

main.o: main.c stack.h
	clang -g -c  main.c

stack.o: stack.c stack.h
	clang -g -c stack.c

clean: 
	rm main main.o stack.o

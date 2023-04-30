main: main.o stack.o Node.o
	g++ -o main main.o stack.o Node.o
	
tests: tests.o stack.o Node.o
	g++ -o tests tests.o stack.o Node.o

main.o: main.cpp stack.h Node.h

tests.o: tests.cpp stack.h Node.h

stack.o: stack.cpp stack.h Node.h

Node.o: Node.cpp Node.h

clean:
	rm -f *o

main: main.o stack.o queue.o Node.o
	g++ -o main main.o stack.o queue.o Node.o
	
tests: tests.o stack.o queue.o Node.o
	g++ -o tests tests.o stack.o queue.o Node.o

main.o: main.cpp stack.h queue.o Node.h

tests.o: tests.cpp stack.h queue.o Node.h

stack.o: stack.cpp stack.h Node.h

queue.o: queue.cpp queue.h Node.h

Node.o: Node.cpp Node.h

clean:
	rm -f *o

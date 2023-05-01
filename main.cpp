#include <iostream>
#include "stack.h"
#include "queue.h"

int main(){
	stack *myStack = new stack();
	myStack->push("a");
	myStack->push("b");
	myStack->push("c");
	myStack->push("d");
	try{
		std::cout<<"taking out: "<<myStack->pop()<<"\n";
	}catch(std::exception e){
		std::cout<<"tried to pop on empty stack \n";
	}
	try{
		std::cout<<myStack->top()<<"\n";
	}catch(std::exception e){
		std::cout<<"tried to read from empty stack \n";
	}
	try{
		std::cout<<"taking out: "<<myStack->pop()<<"\n";
	}catch(std::exception e){
		std::cout<<"tried to pop on empty stack \n";
	}
	try{
		std::cout<<myStack->top()<<"\n";
	}catch(std::exception e){
		std::cout<<"tried to read from empty stack \n";
	}
	
	try{
		std::cout<<"taking out: "<<myStack->pop()<<"\n";
	}catch(std::exception e){
		std::cout<<"tried to pop on empty stack \n";
	}
	try{
		std::cout<<myStack->top()<<"\n";
	}catch(std::exception e){
		std::cout<<"tried to read from empty stack \n";
	}
	try{
		std::cout<<"taking out: "<<myStack->pop()<<"\n";
	}catch(std::exception e){
		std::cout<<"tried to pop on empty stack \n";
	}
	try{
		std::cout<<myStack->top()<<"\n";
	}catch(std::exception e){
		std::cout<<"tried to read from empty stack \n";
	}
	
	queue *myQueue = new queue();
	myQueue->enqueue("hi");
	myQueue->enqueue("hey");
	myQueue->enqueue("sup");
	std::cout<<myQueue->dequeue()<<" is being removed\n";
	std::cout<<myQueue->dequeue()<<" is being removed\n";
	std::cout<<myQueue->front()<<" is being read\n";
	
	return 0;
}

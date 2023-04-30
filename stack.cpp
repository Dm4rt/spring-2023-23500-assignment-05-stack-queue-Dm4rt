#include <iostream>
#include "Node.h"
#include "stack.h"

stack::stack(){
	head = nullptr;
	size=0;
}

stack::~stack(){
	std::cerr << "Calling the destructor\n";
  	Node *walker = head;
  	Node *trailer = nullptr;
  	while (walker != nullptr){
    		trailer=  walker;
    		walker = walker->getNext();
    		std::cerr << "Deleting " << trailer->getData() << ", ";
    		delete trailer;
  	}
  	std::cerr << "\n";
}

void stack::push(std::string data){
  Node *tmp = new Node(data);
  tmp->setNext(head);
  head = tmp;
  
  //increment size for ease
  size++;
}

int stack::pop(){
	//Check for empty stack
	if (head == nullptr){
    		throw std::out_of_range("Tried to remove from empty stack");
  	}
  	
 
	//check if Head is the only node
	if(size>1){
		//if not set head to node after head
		Node *tmp = head->getNext();
		Node *prevHead = head;
		int data = std::stoi(head->getData());
		delete prevHead;
		head = tmp;
		size--;
		return data;
		
	}else{
		//else delete head
		Node *prevHead = head;
		int data = std::stoi(head->getData());
		delete prevHead;
		head = nullptr;
		size=0;
		return data;
		
	}
	
}

int stack::top(){
	//Check for empty stack
	if (head == nullptr){
    		throw std::out_of_range("Tried to read from empty stack");
  	}
  	else{
  		int data = std::stoi(head->getData());
  		return data;
  	}
}

bool stack::is_empty(){
	if(size==0){
		return true;
	}
	return false;
}

/*
  

*/

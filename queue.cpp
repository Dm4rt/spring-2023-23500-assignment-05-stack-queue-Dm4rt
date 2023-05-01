#include <iostream>
#include "queue.h"


queue::queue() : MAX_SIZE(10){
	line.resize(MAX_SIZE);
	head=0;
	tail=0;
}

queue::queue(int size) : MAX_SIZE(size){
	line.resize(MAX_SIZE);
	head=0;
	tail=0;
}

queue::~queue(){
	line.clear();
	head=0;
	tail=0;
}

void queue::enqueue(std::string data){
	if(is_full()){
		throw std::out_of_range("Tried to add to full queue");
	}
	line[tail%MAX_SIZE]=data;
	tail++;
}

std::string queue::dequeue(){
	if(is_empty()){
		throw std::out_of_range("Tried to remove from empty queue");
	}
	std::string data = line[head%MAX_SIZE];
	head++;
	return data;
}

std::string queue::front(){
	if(is_empty()){
		throw std::out_of_range("Tried to read from empty queue");
	}
	return line[head%MAX_SIZE];
}

bool queue::is_empty(){
	if(head%MAX_SIZE==tail%MAX_SIZE&&head/MAX_SIZE==tail/MAX_SIZE){
		return true;
	}
	return false;
}	

bool queue::is_full(){
	//second half could also try if /max is greater 
	//than 1 compared to head, thats to know if tail looped
	if(head%MAX_SIZE==tail%MAX_SIZE&&head/MAX_SIZE!=tail/MAX_SIZE){
		return true;
	}
	return false;
}


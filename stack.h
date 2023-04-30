#pragma once
#include <iostream>
#include "Node.h"

class stack{
 private:
  Node *head;
  int size;
 public:
  stack();
  ~stack();
  void push(std::string data);
  int pop(); 
  int top();
  
  bool is_empty();
};

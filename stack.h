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
  std::string pop(); 
  std::string top();
  
  bool is_empty();
};

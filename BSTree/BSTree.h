#pragma once
#include "Node.h"
#include <string>

class BSTree{
	private:
		Node *root;
	public:
		BSTree();
		void insert(int d);
		std::string get_debug_string_helper(Node *n);
		std::string get_debug_string();
		void setup();
};

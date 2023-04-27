#include "BSTree.h"
#include <iostream>
#include "Node.h"

BSTree::BSTree(){
	root = nullptr;
}
void BSTree::insert(int d){

}
std::string BSTree::get_debug_string_helper(Node *n){
	if(n==nullptr){
		return "";
	}
	else{
		//check left and right
		return std::to_string(n->getData()) + "-Left->" + get_debug_string_helper(n->getLeft()) + "-Right->" + get_debug_string_helper(n->getRight());
	}

}
std::string BSTree::get_debug_string(){
	return get_debug_string_helper(root);
	/*
	if (root == nullptr){
		return "";
	}
	else{
		return std::to_string(root->getData()) + std::to_string(root->getLeft()->getData());
	}
	*/
	
}

void BSTree::setup(){
	Node *n = new Node(10);
	root =n;
	n = new Node(20);
	root->setLeft(n);
	n = new Node(30);
	root->setRight(n);
	n = new Node(40);
	root->getLeft()->setLeft(n);
}

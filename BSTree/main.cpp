#include <iostream>
#include "Node.h"

int main()
{
	Node *n = new Node(10);
	Node *n2 = new Node(20);
	n->setLeft(n2);
	Node *n3 = new Node(30);
	n2->setLeft(n3);
	Node *n4 = new Node(40);
	n3->setLeft(n4);
	Node *n5 = new Node(50);
	n->setRight(n5);
	Node *n6 = new Node(60);
	n5->setLeft(n6);
	Node *n7 = new Node(70);
	n5->setRight(n7);
	
	std::cout<< n->getData() <<"\n";
	std::cout<<n->getLeft()->getData()<<" "<<n->getRight()->getData()<<"\n";
	std::cout<<n->getLeft()->getLeft()->getData()<<" "<<n->getRight()->getLeft()->getData()<<" "<<n->getRight()->getRight()->getData()<<"\n";
	std::cout<<n->getLeft()->getLeft()->getLeft()->getData()<<"\n";
	
	return 0;
}

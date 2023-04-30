#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include "doctest.h"
#include "stack.h"
#include "Node.h"

// add your tests here
TEST_CASE("push"){
 	stack *s = new stack();
 	s->push("a");
 	CHECK(s->top()=="a");
 	s->push("b");
 	CHECK(s->top()=="b");
}

TEST_CASE("pop"){
 	stack *s = new stack();
 	s->push("a");
 	CHECK(s->top()=="a");
 	s->push("b");
 	CHECK(s->top()=="b");
 	s->pop();
 	CHECK(s->top()=="a");
}

TEST_CASE("top"){
	stack *s = new stack();
	s->push("a");
 	CHECK(s->top()=="a");
 	s->push("b");
 	CHECK(s->top()=="b");
}

TEST_CASE("is_empty"){
	stack *s = new stack();
	CHECK(s->is_empty()==true);
	s->push("a");
 	CHECK(s->is_empty()==false);
 	s->push("b");
 	CHECK(s->is_empty()==false);
 	s->pop();
 	s->pop();
 	CHECK(s->is_empty()==true);
}

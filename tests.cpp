#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include "doctest.h"
#include "stack.h"
#include "queue.h"
#include "Node.h"

TEST_CASE("Testing Stack class") {

    SUBCASE("Testing push() and top() methods") {
        stack myStack;
        CHECK(myStack.is_empty() == true);
        myStack.push("one");
        CHECK(myStack.is_empty() == false);
        CHECK(myStack.top() == "one");
        myStack.push("two");
        CHECK(myStack.top() == "two");
        myStack.push("three");
        CHECK(myStack.top() == "three");
    }

    SUBCASE("Testing pop() method") {
        stack myStack;
        CHECK_THROWS_AS(myStack.pop(), std::out_of_range);
        myStack.push("one");
        myStack.push("two");
        myStack.push("three");
        CHECK(myStack.pop() == "three");
        CHECK(myStack.top() == "two");
        CHECK(myStack.pop() == "two");
        CHECK(myStack.top() == "one");
        CHECK(myStack.pop() == "one");
        CHECK(myStack.is_empty() == true);
        CHECK_THROWS_AS(myStack.pop(), std::out_of_range);
    }

    SUBCASE("Testing exceptions") {
        stack myStack;
        CHECK_THROWS_AS(myStack.top(), std::out_of_range);
        CHECK_THROWS_AS(myStack.pop(), std::out_of_range);
        myStack.push("one");
        myStack.push("two");
        myStack.push("three");
        myStack.pop();
        myStack.pop();
        myStack.pop();
        CHECK_THROWS_AS(myStack.top(), std::out_of_range);
        CHECK_THROWS_AS(myStack.pop(), std::out_of_range);
    }
}

TEST_CASE("Queue Tests") {

    SUBCASE("Test enqueue method") {
        queue q(2);
        q.enqueue("apple");
        CHECK(q.front() == "apple");
        q.enqueue("banana");
        CHECK(q.front() == "apple");
    }

    SUBCASE("Test dequeue method") {
        queue q(2);
        q.enqueue("apple");
        q.enqueue("banana");
        CHECK(q.dequeue() == "apple");
        CHECK(q.front() == "banana");
        CHECK(q.dequeue() == "banana");
        CHECK_THROWS_WITH(q.dequeue(), "Tried to remove from empty queue");
    }

    SUBCASE("Test front method") {
        queue q(2);
        q.enqueue("apple");
        CHECK(q.front() == "apple");
        q.enqueue("banana");
        CHECK(q.front() == "apple");
        q.dequeue();
        CHECK(q.front() == "banana");
        q.dequeue();
        CHECK_THROWS_WITH(q.front(), "Tried to read from empty queue");
    }

    SUBCASE("Test is_empty method") {
        queue q(2);
        CHECK(q.is_empty() == true);
        q.enqueue("apple");
        CHECK(q.is_empty() == false);
        q.dequeue();
        CHECK(q.is_empty() == true);
    }

    SUBCASE("Test is_full method") {
        queue q(2);
        CHECK(q.is_full() == false);
        q.enqueue("apple");
        CHECK(q.is_full() == false);
        q.enqueue("banana");
        CHECK(q.is_full() == true);
        q.dequeue();
        CHECK(q.is_full() == false);
    }

    SUBCASE("Test exception when enqueueing into a full queue") {
        queue q(2);
        q.enqueue("apple");
        q.enqueue("banana");
        CHECK_THROWS_WITH(q.enqueue("pear"), "Tried to add to full queue");
    }

    SUBCASE("Test exception when dequeuing from an empty queue") {
        queue q(2);
        CHECK_THROWS_WITH(q.dequeue(), "Tried to remove from empty queue");
    }

    SUBCASE("Test exception when reading from an empty queue") {
        queue q(2);
        CHECK_THROWS_WITH(q.front(), "Tried to read from empty queue");
    }
}


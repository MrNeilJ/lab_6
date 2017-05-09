//
// Created by Neil on 5/9/2017.
//

#include <iostream>
#include "numberList.hpp"

numberList::~numberList() {
	ListNode *nodePtr = head;
	while (nodePtr != nullptr) {
		// Mark node for preparation to delete
		ListNode *garbage = nodePtr;

		// Move pointer to next item
		nodePtr = nodePtr->next;

		// Delete old node
		delete garbage;
	}
}

void numberList::add(double number) {
	if (head == nullptr) {
		head = new ListNode(number, nullptr, head);
	}
	else {
		ListNode *nodePtr = head;
		while (nodePtr->next != nullptr){
			nodePtr = nodePtr->next;
		}

		nodePtr->next = new ListNode(number, nullptr, nodePtr);

	}
}

/****************************************************
 * HEAD FUNCTIONS
 ****************************************************/
void numberList::addHead(double number) {
	if (head == nullptr) {
		head = new ListNode(number, tail, nullptr);
		tail = head;
	}
	else {
		ListNode *nodePtr = head;
		head = new ListNode(number, nodePtr);
		nodePtr->prev = head;
	}
}

void numberList::removeHead() {
	ListNode 	*nodePtr;

	if (!head){
		return;
	}
	// Mark the old head location for later
	nodePtr = head;

	// Move the location of the head location up one spot
	head = head->next;

	// Delete the old head location
	delete nodePtr;
}


/****************************************************
 * TAIL FUNCTIONS
 ****************************************************/
void numberList::addTail(double number) {
	if (tail == nullptr) {
		tail = new ListNode(number, tail, nullptr);
	}
	else {
		ListNode *nodePtr = head;
		head = new ListNode(number, nodePtr);
	}
}

void numberList::removeTail() {
	ListNode 	*nodePtr;

	if (!tail){
		return;
	}
	// Mark the old head location for later
	nodePtr = tail;

	// Move the location of the head location up one spot
	tail = tail->prev;
	tail->next = nullptr;

	// Delete the old head location
	delete nodePtr;
}

void numberList::displayList() const {
	ListNode *nodePtr = head;
	while (nodePtr) {
		// Print the value in the current node
		std::cout << nodePtr->value << " ";
		// Move to the next node
		nodePtr = nodePtr->next;
	}
}

void numberList::displayListReverse() const {
	ListNode *nodePtr = tail;
	while (nodePtr) {
		// Print the value in the current node
		std::cout << nodePtr->value << " ";
		// Move to the next node
		nodePtr = nodePtr->prev;
	}
}

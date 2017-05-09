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
		head = new ListNode(number);
	}
	else {
		ListNode *nodePtr = head;
		while (nodePtr->next != nullptr){
			nodePtr = nodePtr->next;
		}

		nodePtr->next = new ListNode(number);

	}
}

void numberList::removeHead() {

}

void numberList::removeTail() {

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
	ListNode *nodePtr = head;
}

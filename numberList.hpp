//
// Created by Neil on 5/9/2017.
//

#ifndef LAB_6_LISTNODE_HPP
#define LAB_6_LISTNODE_HPP


class numberList {
private:
	struct ListNode {
		double value;
		ListNode *next;
		ListNode *prev;
		//
		ListNode(double value1, ListNode *next1 = nullptr, ListNode *prev1 = nullptr) {
			value = value1;
			next = next1;
			prev = prev1;
		}
	};
	ListNode *head;
	ListNode *tail;

public:
	// Constructor
	numberList();

	// Destructor
	~numberList();
	void add(double number);

	// Head Functions
	void addHead(double number);
	void removeHead();

	// Tail Functions
	void addTail(double number);
	void removeTail();

	// Display functions
	void displayList() const;
	void displayListReverse() const;
};


#endif //LAB_6_LISTNODE_HPP

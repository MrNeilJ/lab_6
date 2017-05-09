#include <iostream>
#include "menuMaker.hpp"
#include "numberList.hpp"
#include "inputCheck.hpp"

int main() {
	std::cout << "*****************************************" << std::endl;
	std::cout << "*          LIST LINKER PROGRAM          *" << std::endl;
	std::cout << "*****************************************" << std::endl;
	std::cout << "Welcome to the list linker program! In here you will" << std::endl;
	std::cout << "be able to create your very own linked list from"		<< std::endl;
	std::cout << "scratch.\n"											<< std::endl;

	menuMaker mainMenu(	"What would you like to do to your list?",
						"Add a new node to the head.",
						"Delete from the head(the first node in the list.",
						"Delete from the tail(the last node in the list.",
						"Traverse the list reversely, that is to print the node from back to front.",
						"Quit");

	int mainChoice = -1;

	/**************************************
	 * LINKED LIST CREATOR
	 **************************************/


	numberList myList;
	int number;


	do {
		mainMenu.prompt();
		mainChoice = mainMenu.getResponse();

		if (mainChoice == 1) {
			// Add a new node to the head
			std::cout << "Type in the number you'd like to add to the list: ";
			number = getInt();
			myList.add(number);

			// Show the updated list
			std::cout << "\n\nHere is an updated copy of your list:" << std::endl;
			myList.displayList();
			std::cout << "\n" << std::endl;
		}
		else if (mainChoice == 2) {
			// Delete from the head(the first node in the list.

		}
		else if (mainChoice == 3) {
			// Delete from the tail(the last node in the list

		}
		else if (mainChoice == 4) {
			// Traverse the list reversely, that is to print the node from back to front

		}
		else if (mainChoice == 5) {
			std::cout << "Thanks for using the list linker, have a great day!";

		}
		else {
			std::cout << "I'm sorry, I do not understand that response, try again.\n" << std::endl;
		}
	} while(mainChoice != 5);


	return 0;
}


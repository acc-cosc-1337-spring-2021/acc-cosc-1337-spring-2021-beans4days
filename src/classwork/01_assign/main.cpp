//Write the include statement for types.h here
#include "types.h"
//Write include for capturing input from keyboard and displaying output to screen
#include <iostream>

int main() 
{
	// a) Create an int variable named num.
	int num;

	// b) Use the cin object to capture a number from the keyboard, assign the number to num.
	// TODO - Prompt user to enter using cout and cin.
	std::cout << "Enter a number to assign: " << "\n";
	std::cin >> num;

	// c) Create an int variable named result, call the multiply_numbers with num as its parameter, assign the return value of the function multiply_numbers to the result variable,
	// display the result variable to the screen.
	//int result;
	int result = multiply_numbers(num);
	std::cout << result << "\n";
	
	//return 
	//
	/* multiply_numbers(num); */
	//int multiply_numbers (int num) {
		//int num = return num;
		//std::cout << num;
		//std::cout << "\n";
	//}

	//d) Create an int variable named num1, assign it the value 4.
	int num1 = 4;

	// e) Call the function multiply_numbers with num1 as its parameter, assign its return value to the result variable, and display the result variable to screen.

	result = multiply_numbers(num1);
	std::cout << result << "\n";
	//int multiply_numbers(int num1) 
	//{
		//return num1;
		//int num1 = return num1;
		//std::cout << num1;

	//}
	//int 

	return 0;
}


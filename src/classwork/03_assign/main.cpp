//Write the include statement for decisions.h here
#include "decision.h"
#include <iostream>

//Write namespace using statements for cout and cin
// using namespace std;

int main() 
{
	// declare variable
	int grade;

	// prompt user to enter grade
	std::cout << "Please enter from 0 - 100" <<"\n";
	std::cout << "Enter your grade: ";
	std::cin >> grade;
	std::cout << "\n";

	std::cout << "By using if statements" <<"\n";
	std::cout << "Grade: " << get_letter_grade_using_if(grade) <<"\n";
	std::cout << "\n";

	std::cout << "By using switch statements" <<"\n";
	std::cout << "Grade: " << get_letter_grade_using_switch(grade) <<"\n";

	return 0;
}
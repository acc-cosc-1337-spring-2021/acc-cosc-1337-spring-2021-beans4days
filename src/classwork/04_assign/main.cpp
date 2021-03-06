//write includes statements
#include "loops.h"
#include <iostream>
//write using statements for cin and cout


/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main(){
	
	int num;
	
	//post condition loop - will execute 1 or more times
	
	do{
		std::cout << "\n" << "Enter number -1 to exit.";
		std::cout <<"\n" << "Enter number: ";
		std::cin >> num;
	
		std::cout <<"\n" << "Number entered: " << num <<"\n";
		
		std::cout <<"Factorial of " << num << "is " << factorial(num) <<"\n";
		
		// num++; //
		
	}while(num >= 1 && num <= 10);
	
	return 0;
	
	
}
//write include statements
#include <iostream>
#include "variables.h"



//write namespace using statement for cout
// using namspace std; // bad programming practice
//using std::cout; //using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	// a) Create double variables named meal_amount, tip_rate, tip_amout, tax amount and total.
	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;

	// b) Use the cin object to capture the number from the keyboard, assign the number to meal_amount.
	std::cout << "Enter meal amount: \n";
	std::cin >> meal_amount;

	// c) Call the get_sales_tax_amount with meal_amount as its parameter, assign the return value of the function get_sales_tax_amount variable.
	//get_sales_tax_amount(meal_amount); //
	//double get_sales_tax_amount = get_sales_tax_amount(double meal_amount); 
	tax_amount = get_sales_tax_amount(meal_amount);

	// d) Capture the tip rate from keyboard and assign the value to tip_rate variable.
	std::cout << "Enter tip rate: \n";
	std::cin >> tip_rate;
	// tip_rate = tip_rate/100;
	std::cout << "\n";

	// e) Call the function get_tip amount with meal_amount and tip_rate as its parameters, set function get_tip_amount return value to tip_amount.
	//get_tip_amount(meal_amount, tip_rate); //
	tip_amount = get_tip_amount(meal_amount, tip_rate); //

	// f) Add tip_amount, tax_amount and meal_amount, and save results to total variable.
	total = tip_amount + tax_amount + meal_amount; //

	// g) Display a receipt (formatting the number decimal spaces is optional):
	std::cout << "Meal Amount: " << meal_amount << "\n"
	<< "Sales Tax: " << tax_amount <<"\n"
	<< "Tip Amount: " << tip_amount << "\n"
	<< "Total: " << total << "\n";

	return 0;
}
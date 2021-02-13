#include "variables.h"

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write code for multiply_numbers function here
//function returns product of num1 and num2

// b) In file variables.cpp create a constant double variable named "tax_rate" with value 6.75%, write function code, multiply tax_rate and meal_amount and return their product.

const double tax_rate = 0.0675;

//tax_rate * meal_amount;

double get_sales_tax_amount(double meal_amount) 
{ 
	return tax_rate * meal_amount;
}


// d) In file variables.cpp, write function code to multiply "meal_amount" and "tip_rate", return their product.
//meal_amount * tip_rate;

double get_tip_amount(double meal_amount, double tip_rate)
{
	return meal_amount * tip_rate;
}



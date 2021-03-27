//write include statements
#include "dna.h"
#include<string>
#include<iostream>


//write using statements
using std::string;
using std::cout; using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{

	string dna_string;
	int Answer_1;
	char Loop_Answer_2;
	do
	{
		cout <<"\n";
		cout << "Please enter DNA String: \n";
		cin >> dna_string;
		cout <<"\n";
		cout << "You have entered: " << dna_string <<"\n";
		string dna = dna_string;
		cout <<"\n";

		cout << "Enter 1 for Get GC Content.\n";
		cout << "Enter 2 for Get DNA Complement.\n";
		cout <<"\n";
		cout << "You Answer Is: ";
		cin >> Answer_1;
		cout << "\n";

		cout << "You have selected " << Answer_1 <<"\n";
		cout <<"\n";

		if(Answer_1 == 1)
		{
			double gc_content = get_gc_content(dna);
			cout << "The GC Content is " << gc_content <<"\n";
			cout <<"\n";
		}
		else if (Answer_1 == 2)
		{
			string dna_complement = get_dna_complement(dna);
			cout << "The DNA Complement is " << dna_complement <<"\n";
			cout <<"\n";
		}
		else
		{
			cout << "You have entered the wrong number.\n";
		}

		cout << "Enter 'Y' to continue: ";
		cin >> Loop_Answer_2;

	} while (Loop_Answer_2 == 'Y' || Loop_Answer_2 == 'y');
	
	






	return 0;
}
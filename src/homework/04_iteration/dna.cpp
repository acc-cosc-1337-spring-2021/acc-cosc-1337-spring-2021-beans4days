#include "dna.h"

#include<iostream>
#include<string>
#include<vector>

using std::string; 
using std::cout; using std::cin;

/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const string& dna){
    int counter = 0;
    double gc_content;
    
    double dnalength = dna.length();

    for (int i = 0; i < dna.length(); ++i)
    {
        if (dna[i] == 'C')
        {
            counter = counter + 1;
        }

        else if (dna[i] == 'G')
        {
            counter = counter + 1;
        }
    }
    gc_content = counter/dnalength;

    return gc_content;
}


/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

string get_reverse_string(string dna)
{
    string reverse_string;

    for (int i = dna.length() - 1; i >= 0; i--)
    {
        reverse_string.push_back(dna[i]);
    }
    return reverse_string;
}

/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

// A is replaced with T, vice versa, T is replaced with A
// C is replaced with G, vice versa, G is replaced with C
// return.

string get_dna_complement(string dna)
{
    string dna_complement = get_reverse_string(dna);

    for (int i = 0; i < dna_complement.length(); i++)
    {
        if (dna_complement[i] == 'A')
        {
            dna_complement[i] = 'T';
        }
        else if (dna_complement[i] == 'T')
        {
            dna_complement[i] = 'A';
        }
        else if (dna_complement[i] == 'C')
        {
            dna_complement[i] = 'G';
        }
        else if (dna_complement[i] == 'G')
        {
            dna_complement[i] = 'C';
        }
    }
    string new_dna_complement = dna_complement;
    return new_dna_complement;
}
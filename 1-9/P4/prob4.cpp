/*
Author: Barrett Helms
Program: Project Euler, Problem 4
Purpose: Find the largest palindrome made from the product of two 3-digit numbers
Date started: Mar-7-2013
Date last modified: Mar-7-2013
Status: Solved
*/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool palindrome(int prod)
{
    string strProd = static_cast<ostringstream*>( &(ostringstream() << prod) )->str();
    for (int i = 0, j = strProd.length()-1; i < strProd.length(); i++, j--) {
        if (strProd[i] != strProd[j]) return false;
    }
    return true;    
}

int product(int num, int num2, int highest=0, int prod=0)
{
    for (int n = num; n > 0; n--) {
        for (int n2 = num2; n2 > 0; n2--) {
            prod = n * n2;
            if (palindrome(prod) && prod > highest) highest = prod;
        }
    }
    return highest;
}

int main()
{
    cout << product(999, 999) << endl;
    return 0;
}

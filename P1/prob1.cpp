/*
Author: Barrett Helms
Program: Problem 1
Purpose: Find the sum of all the multiples of 3 or 5 below 1000
Date started: Jan-27-2012
Last modified: Jan-27-2012
Status: Solved
*/
#include <iostream>
using namespace std;

int main()
{
    // Variables
    int sum = 0;   // Total of all multiples of 3 or 5

    for (int i = 0; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    cout << sum << endl;
    return 0;
}

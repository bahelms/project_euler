/*
Author: Barrett Helms
Program: Problem 2
Purpose: Find the sum off all the even numbers of the Fibonacci sequence up to
    4,000,000
Date started: Jan-28-2012
Last modified: Jan-28-2012
Status: Solved
*/
#include <iostream>
using namespace std;

int main()
{
    // Variables
    const long UB = 4000000;
    int num1 = 0, num2 = 1, temp = 0, sum = 0;

    while (num2 < UB) {
        temp = num1 + num2;
        num1 = num2;
        num2 = temp;
        if (num1 % 2 == 0) {
            sum += num1;
        }
    }

    cout << sum << endl;
    return 0;
}

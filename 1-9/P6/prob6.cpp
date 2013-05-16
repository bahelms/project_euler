/*
Author: Barrett Helms
Program: Problem 6, Project Euler
Purpose: Find the difference between the sum of the squares and square of the sums of the first
  100 natural numbers.
Date started: Mar-10-2013
Date last modified: Mar-10-2013
Status: Solved
*/
#include <iostream>
int main()
{
    int sum = 0, sumOfSquares = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
        sumOfSquares += i * i;
    }
    std::cout << sum*sum - sumOfSquares << std::endl;
    return 0;
}

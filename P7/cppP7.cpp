/*
Author: Barrett Helms
Program: Problem 7, Project Euler
Purpose: Find the 10,001st prime number
Date started: Mar-12-2013
Date last modified: Mar-12-2013
Status: Solved
*/
#include <iostream>

bool isPrime(int num)
{
    if (num == 2) return true;   // 2 is prime
    if (num % 2 == 0) return false;   // Even numbers are false
    for (int i = 3; i < num; i += 2) if (num % i == 0) return false; 
    return true;
}

int main()
{
	int count = 0, numCheck = 2, primeNum;

    while (count < 10001) {
        if (isPrime(numCheck)) {
            count++;
            primeNum = numCheck;
        }
        numCheck++;
    }
	std::cout << primeNum << std::endl;
	return 0;
}

/*
Author: Barrett Helms
Program: Problem 3
Purpose: Find the largest prime factor of 600851475143
Date started: Feb-2-2013
Last modified: Mar-6-2013
Status: Solved
Largest prime factor of 13195 is 29.
*/
#include <iostream>
using namespace std;

bool isPrime(long long n)
{
    for (long long i = 2; i < n; i++) if (n % i == 0) return false;
    return true;
}

long long largestPrimeFactor(long long num, long long factor=0, int div=2)
{
    if (num % div == 0) {
        factor = div;
        num = num / div;
        if (isPrime(num)) factor = num;
        else largestPrimeFactor(num, factor, div);
    }
    else {
        do {
          div++;
        } while (!isPrime(div));
        largestPrimeFactor(num, factor, div);
    }
}

int main()
{
    cout << largestPrimeFactor(600851475143) << endl;
    return 0;
}


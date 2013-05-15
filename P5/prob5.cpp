/*
Author: Barrett Helms
Program: Problem 5, Project Euler
Purpose: Find the smallest positive number that is evenly divisible by 1-20
Date started: Mar-10-2013
Date last modified: Mar-10-2013
Status: Solved
*/
#include <iostream>
int main()
{
    int num, count = 1, total = 1;
    while (count <= 20) {
        if (total % count == 0) {
            count++;
            num = total;
        }
        else {
            total += num;
        }
    }
    std::cout << total << std::endl;
    return 0;
}

/*
Author: Barrett Helms
Program: Project Euler, Problem 9
Purpose: Find the only Pythagorean triplet in which a+b+c = 1000
Date started: Mar-27-2013
Date last modified: Apr-25-2013
Status: solved
*/
var ans;
for (var a = 1; a < 997; a++) {
	var b = a+1, c = 1000-(a+b);
	while (b < c) {
		if (a*a + b*b == c*c) ans = a*b*c;
		b++;
		c--;
	}
}
console.log(ans);
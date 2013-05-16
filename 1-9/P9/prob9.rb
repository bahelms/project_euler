=begin
Author: Barrett Helms
Program: Project Euler, Problem 9
Purpose: Find the only Pythagorean triplet in which a+b+c = 1000
Date started: Mar-27-2013
Date last modified: Apr-25-2013
Status: solved
=end
ans = 0
1.upto(997) do |a|
  b = a+1
  c = 1000-(a+b)
  while b < c
    ans = a*b*c if a*a + b*b == c*c
    b += 1
    c -= 1
  end
end

p ans
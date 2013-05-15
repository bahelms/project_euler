=begin
Author: Barrett Helms
Program: Problem 6, Project Euler
Purpose: Find the difference between the sum of the squares and square of the sums of the first
  100 natural numbers.
Date started: Mar-10-2013
Last modified: Mar-10-2013
Status: Solved
=end
p (1..100).inject { |sum, num| sum += num }**2 - (1..100).inject { |sum, num| sum += num**2 }


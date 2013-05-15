=begin
Author: Barrett Helms
Program: Problem 2
Purpose: Find the sum off all the even numbers of the Fibonacci sequence up to 4,000,000
Date started: Jan-28-2012
Last modified: Jan-28-2012
Status: Solved
=end

num1 = 0
num2 = 1
temp = 0
sum = 0

while num2 < 4000000
  temp = num1 + num2
  num1 = num2
  num2 = temp
  sum += num1 if num1.even?
end

puts sum


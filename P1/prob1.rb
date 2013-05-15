=begin
Author: Barrett Helms
Program: Problem 1
Purpose: Find the sum of all the multiples of 3 or 5 below 1000
Date started: Jan-27-2012
Last modified: Jan-27-2012
Status: Solved
=end

sum = 0
1000.times do |number|
  sum += number if (number % 3 == 0) || (number % 5 == 0)
end
puts sum

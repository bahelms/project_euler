=begin
Author: Barrett Helms
Program: Problem 5, Project Euler
Purpose: Find the smallest positive number that is evenly divisible by 1-20
Date started: Mar-10-2013
Last modified: Mar-10-2013
Status: Solved
=end
count, total, num = 1, 1, 0
loop do
  if total % count == 0
    count += 1
    num = total
  else total += num end
  break if count > 20
end
p total


=begin
Author: Barrett Helms
Program: Project Euler Problem 3
Purpose: Find the largest prime factor of 600851475143
Date started: Mar-5-2013
Last modified: Mar-5-2013
Status: Solved
=end
require 'prime'

def factor(num, factors=0, div=2)
  if num % div == 0
    factors = div   
    num /= div
    if num.prime? then factors = num
    else factor(num, factors, div) end
  else
    loop do
      div += 1
      break if div.prime?
    end
    factor(num, factors, div)
  end
end

p factor 600851475143


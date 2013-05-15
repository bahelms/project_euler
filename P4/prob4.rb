=begin
Author: Barrett Helms
Program: Project Euler, Problem 4
Purpose: Find the largest palindrome made from the product of two 3-digit numbers
Date started: Mar-7-2013
Last modified: Mar-7-2013
Status: Solved
=end

def product(num, num2, highest=0)
  num.downto(1) do |n|
    num2.downto(1) do |n2|
      prod = n * n2
      if prod.to_s == prod.to_s.reverse && prod > highest
        highest = prod
        break
      end
    end
  end
  highest
end

p product(999, 999)


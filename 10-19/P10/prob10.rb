=begin
Author: Barrett Helms
Program: Project Euler, Problem 10
Purpose: Find the sum of all the primes below two million
Date started: May-1-2013
Date last modified: May-4-2013
Status: solved
=end
require 'benchmark'
require 'prime'

total = 0
Benchmark.bm do |x|
  x.report { Prime.each(2000000) { |p| total += p } }
end

puts total
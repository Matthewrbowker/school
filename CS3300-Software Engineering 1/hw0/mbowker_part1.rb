#!/usr/bin/ruby

=begin
- Define a method sum which takes an array of integers as an argument and returns the sum of its elements.
For an empty array it should return zero.
- Define a method max_2_sum which takes an array of integers as an argument and returns the sum of its two largest
elements. For an empty array it should return zero. For an array with just one element, it should return that element.
- Define a method sum_to_n? which takes an array of integers and an additional integer, n, as arguments and returns
true if exactly two elements in the array of integers sum to n. An empty array should sum to zero by definition.
=end

# @param [array] sums
# @return [int] Sum of the entire array
def sum(sums = Array[0])
  retVal = 0;
  sums.each do |i|
    retVal = (retVal + i.to_i);
  end
  retVal;
end

def max_2_sum(sums = Array[0])
  max_1 = 0;
  max_2 = 0;
  sums.each do |i|
    if (max_1 >= max_2)
      if i > max_2
        max_2 = i;
      end
    else
      if (i > max_1)
        max_1 = i;
      end
    end
  end
  # puts max_1.to_s + " " + max_2.to_s;
  return max_1 + max_2
end

# @param [Array] sums
# @param [int] n
# @return [bool]
def sum_to_n?(sums = Array[0], n = 0)
  numSums = 0;
  sums.each do |i|
    # puts i.to_s;
    sums.drop(i).each do |j|
      # puts "    " + j.to_s;
      if i+j== n
        numSums = numSums + 1;
        # puts "        TRUE";
      else
        # puts "        FALSE";
      end
    end
  end
  # puts numSums;
  if numSums > 0
    return true
  else
    return false;
  end
end

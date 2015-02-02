#!/usr/bin/ruby

=begin
- Write a function called frequency_string(chars), which given an array of single-character strings, returns a string of
each character followed by its frequency.
Ex: frequency_string([‘a’,‘c’,‘#’,‘2’,‘a’,‘a’,‘#’]) # ==> “a3c1#221”
- Write a function called is_anagram_of?(string1, string2) that returns true if string2 is an anagram (same letters but
maybe in different order) of string1 and false otherwise.Then extend the String class with a method
is_anagram_of?(string) that returns true if string is an anagram of the String instance.
=end

def frequency_string(chars = Array[])
  frequency = Hash.new(0);
  returnValue = "";

  chars.each do |i|
    i = i.to_s.downcase;
    if (i != " ")
      frequency[i] = frequency[i] + 1;
    end
  end

  frequency.each do |key, value|
    if value != 0
      returnValue += "#{key}#{value}";
    end
  end

  return returnValue;
end

class String
  def is_anagram_of?(string2 = "")
    #freqString1 = frequency_string(string1.scan(/\w/));
    #freqString2 = frequency_string(string2.scan(/\w/));
    array1 = self.downcase.split(//).sort;
    array2 = string2.downcase.split(//).sort;
    arrayFinal1 = Array.new(0);
    arrayFinal2 = Array.new(0);
    isAnagram = false;

    array1.each do |i|
      if (!/[[:punct:]]/.match(i) and !/[\r|\n|\s]/.match(i))
        arrayFinal1.push(i);
      end
    end

    array2.each do |i|
      if (!/[[:punct:]]/.match(i) and !/[\r|\n|\s]/.match(i))
        arrayFinal2.push(i);
      end
    end

    if ((arrayFinal1 <=> arrayFinal2) == 0)
      isAnagram = true
    end

    isAnagram

  end
end
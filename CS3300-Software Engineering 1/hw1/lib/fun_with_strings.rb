module FunWithStrings
  def palindrome?
    i = self.downcase().gsub(/[[:punct:]]/,"").gsub(/[\r|\n|\s]/,"")
    puts i;
    j = i.reverse;

    if i==j
      return true;
    else
      return false;
    end
  end

  def count_words
    # your code here
    retVal = Hash.new(0);
    i = self.downcase().gsub(/[[:punct:]]/,"").gsub(/[\r|\n]/,"").split(" ");

    i.each do |j|
      retVal[j] = retVal[j] + 1;
    end

    return retVal;
  end

  def anagram_groups
    # your code here
    return Array.new();
  end

end

# make all the above functions available as instance methods on Strings:

class String
  include FunWithStrings
end

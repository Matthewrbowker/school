# Part 1

# "Main method", this is the actual test code here.
puts sum();
puts sum(Array[1, 2, 3, 4, 5, 6]);
puts sum(Array[5,85,3,76]);
# Testing method 2
puts '---------------------';
puts max_2_sum();
puts max_2_sum(Array[0]);
puts max_2_sum(Array[1,2,3,4,5,6,7,8,9,10]);
puts max_2_sum(Array[567,4567,1,5,9876]);
# Testing method three
puts '---------------------';
puts sum_to_n?();
puts sum_to_n?(Array[0,0], 0);
puts sum_to_n?(Array[1,2,3,4,5,6,7,8,9,10], 0);
puts sum_to_n?(Array[1,2,3,4,5,6,7,8,9,10], 19);
puts sum_to_n?(Array[1,2,3,4,5,6,7,8,9,10], 15);
puts sum_to_n?(Array[567,4567,1,5,9876], 0);

gets; #<-------
exit(0);

# Part 2
puts frequency_string("testing\"".scan(/\w/));
puts frequency_string(Array['a','c','#','2','a','a','#'])

puts "".is_anagram_of?(""); # Returns true, as nothing is technically an anigram of nothing
puts "Mother in law".is_anagram_of?("Woman Hitler");
puts "Mother in law".is_anagram_of?("Woman Mother");
puts "Fir Cones".is_anagram_of?("Conifers");
puts "Fir Cones".is_anagram_of?("Conifer");
puts "To be or not to be: that is the question; whether 'tis nobler in the mind to suffer the slings and
arrows of outrageous fortune...".is_anagram_of?("In one of the Bard's best-thought-of tragedies our insistent hero,
Hamlet, queries on two fronts about how life turns rotten.");
puts "To be or not to be: that is the question; whether 'tis nobler in the mind to suffer the slings and
arrows of outrageous fortune...".is_anagram_of?("In one of the Bard's best-thought-of tragedies our insistent hero,
Juliet, queries on two fronts about how life turns rotten.");

gets;
exit(0);

# Part 3

#glob_match();
glob_match(Array["part1.rb", "part2.rb", "part2.rb~", ".part3.rb.un~"], "*part*rb?*");
glob_match(Array["part1.rb", "part2.rb", "part2.rb~", ".part3.rb.un~"], "*.rb*");
glob_match(Array["part1.rb", "part2.rb", "part2.rb~", ".part3.rb.un~"], "*.py*");

gets();


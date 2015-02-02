#!/usr/bin/ruby

=begin
Write a function called glob_match(filenames, pattern), which takes an array of filename strings and a glob pattern
string and returns an array of the filenames that match the following UNIX glob rules:
- *: matches zero or more characters,
- ?: matches any 1 character,
- [abc]: matches a, b, or c

Ex: glob_match([“part1.rb”, “part2.rb”, “part2.rb~”, “.part3.rb.un~”],“*part*rb?*”)
# ==> [“part2.rb~”, “.part3.rb.un~”]

(Hint: use gsub to replace string subsequences)
=end

def glob_match(filenames=Array[], pattern = "")
  result = Array.new(0);

  pat = pattern.gsub("*",".*").gsub("?",".+");

  filenames.each do |i|
    if i.match(pat)
      result.push(i);
    end
  end

  result;
end

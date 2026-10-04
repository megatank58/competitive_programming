gets.to_i.times {
  gets
  a = gets.chomp
  if a.count('1') > a.count('0') then
    puts "Bessie"
  elsif a.count('1') < a.count('0') then
    puts "Elsie"
  else
    puts "Bessie"
  end
}

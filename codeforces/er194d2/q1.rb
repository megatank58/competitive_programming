n = gets.to_i

n.times {
  gets.to_i

  s = gets.chomp

  r = if s.count('0') < 2 then
     -1
  else
    [0,1,2][s[0].to_i + s[-1].to_i]
  end

  puts r
}

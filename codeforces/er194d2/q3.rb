n = gets.to_i
n.times {
  a,b = gets.split.map &:to_i
  if a == 0 then
    puts "#{a ^ b} 0"
  else
    s = a + b

    y = 2**(Math.log2(s).floor)
    x = s - y
    r = [(x-a).abs, (y-a).abs, (x-b).abs, (y-b).abs].max
    puts "#{s} #{r}"
  end
}

gets.to_i.times {
  n = gets.to_i
  r = (0..n-1).to_a
  a = gets.split.map.with_index{|v, i| v=v.to_i;r -= (v*(i+1)..v*(i+1)+i).to_a}
  
  puts r.size
  if r.size != 0 then puts r.join(" ") end
}

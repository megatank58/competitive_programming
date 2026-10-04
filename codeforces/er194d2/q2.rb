n = gets.to_i

n.times {
  a,b,c = gets.split.map &:to_i
  sum = 0
  d = 0
  
  until d == c do
    r = b % a
    sum += r
    b += 1
    a += 1
    d += 1

    if r == 0 and b / a == 1 then
      sum += (c - d) * (b % a)
      break
    end
  end

  puts sum
}

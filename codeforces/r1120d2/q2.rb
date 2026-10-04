gets.to_i.times {
  n, k = gets.split.map &:to_i

  if k == 0 || k > 2 * n - 1 || k < n then
    puts -1
  else
    a = (1..n**2).to_a.each_slice(n).to_a
    s = (2 * n - 1) - k
    until s == 0 do
      t = a[0][s]
      a[0][s] = a[s][s]
      a[s][s] = t
      s -= 1
    end
    puts a.map{_1.join" "}.join"\n"
  end
}

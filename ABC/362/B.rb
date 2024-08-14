A = gets.chomp.split(" ").map(&:to_i)
B = gets.chomp.split(" ").map(&:to_i)
C = gets.chomp.split(" ").map(&:to_i)

def len(ar1, ar2)
  (ar1[0] - ar2[0]).pow(2) + (ar1[1] - ar2[1]).pow(2)
end

def r_a_t?(a, b, c)
  l_ab = len(a, b)
  l_bc = len(b, c)
  l_ca = len(c, a)

  return true if l_ab + l_bc == l_ca || l_bc + l_ca == l_ab || l_ca + l_ab == l_bc
  false
end

puts r_a_t?(A, B, C) ? "Yes" : "No"

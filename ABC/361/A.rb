N, K, X = gets.chomp.split(" ").map(&:to_i)
A = gets.chomp.split(" ").map(&:to_i)

puts A.insert(K, X).join(" ")

N = gets.to_i
A = gets.split(" ").map(&:to_i)



def f
  second_max_num = A.sort[-2]
  A.find_index(second_max_num) + 1
end

puts f

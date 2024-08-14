RGB = gets.chomp.split(" ").map(&:to_i)
C = gets.chomp

def color_index
  return 0 if C == "Red"
  return 1 if C == "Green"
  return 2 if C == "Blue"
end

RGB.delete_at(color_index)
puts RGB.min

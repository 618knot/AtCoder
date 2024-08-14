N, T, P = gets.split(" ").map(&:to_i)
L = gets.split(" ").map(&:to_i)

def main
  l = L
  day = 0

  while true
    l_selected = l.select { |l| l >= T}
    return day if l_selected.length >= P

    day += 1
    l.map! { |l| l += 1 }
  end
end

puts main

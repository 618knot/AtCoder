H, W = gets.chomp.split(" ").map(&:to_i)
Si, Sj = gets.chomp.split(" ").map(&:to_i)

GRID = []
H.times do
  GRID.push(gets.chomp)
end

X = gets.chomp

def main
  si = Si - 1
  sj = Sj - 1

  X.chars.map do |drct|
    case drct
    when "U"
      si -= 1 if si != 0 && empty?(si -1, sj)
    when "D"
      si += 1 if si != H - 1 && empty?(si + 1, sj)
    when "L"
      sj -= 1 if sj != 0 && empty?(si, sj - 1)
    when "R"
      sj += 1 if sj != W - 1 && empty?(si, sj + 1)
    end
  end

  puts [si + 1, sj + 1].join(" ")
end

def empty?(si, sj)
  GRID[si][sj] == "."
end

main

N = gets.to_i
S = Array.new(N) { gets.chomp }

def main
  sw_cnt = 0
  S.map.with_index do |str, idx|
    if str == "sweet"
      sw_cnt += 1
      return "No" if sw_cnt == 2 && idx != N - 1
    else
      sw_cnt = 0
    end
  end
  "Yes"
end

puts main

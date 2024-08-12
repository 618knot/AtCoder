def f
  n = gets.to_i
  strarr = Array.new(n) { gets.chomp }

  strarr.reverse!
  max_str = strarr.max_by { |s| s.length }
  for i in 0..max_str.length - 1 do
    line = Array.new()
    strarr.map do |str|
      tmp = str[i]
      line.push(tmp.nil? ? "*" : tmp)
    end

    while line.last == "*" do
      line.pop
    end

    puts line.join
  end
end

f

def f
  inputs = gets.split.map(&:to_i)

  return "Yes" if (inputs[0] + 1) / 2 <= inputs[1]
  return "Yes" if (inputs[0] + 1) / 2 <= inputs[2]

  "No"
end

puts f

Y = gets.to_i

def normal?
  return true unless Y % 4 == 0
  return true if Y % 100 == 0 && Y % 400 != 0
  false
end

def f
  return 365 if normal?
  366
end

puts f

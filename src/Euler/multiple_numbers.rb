def multiple_numbers ceiling
  result = []
  max = ceiling
  ceiling.times do |number|
    if (max >= number) && ((number % 3 == 0) || (number % 5 == 0))
      max = max - number
      result << number
    end
  end
  result.delete(0)
  result.uniq
end

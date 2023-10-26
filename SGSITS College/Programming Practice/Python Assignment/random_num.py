import random

random_numbers = [random.randint(0, 10) for _ in range(20)]

divisible_by_5_or_7 = [num for num in random_numbers if num % 5 == 0 or num % 7 == 0]

print("Random Numbers:", random_numbers)
print("Numbers Divisible by 5 or 7:", divisible_by_5_or_7)

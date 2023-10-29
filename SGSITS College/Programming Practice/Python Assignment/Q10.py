import re

input_str = input("Enter a sequence of words: ")

digit_words = re.findall(r'\b\d+\b', input_str)

print(digit_words)

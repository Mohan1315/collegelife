import re

# Input a sequence of words separated by whitespace
input_str = input("Enter a sequence of words: ")

# Use regular expressions to find words composed of digits
digit_words = re.findall(r'\b\d+\b', input_str)

# Print the words composed of digits
print(digit_words)

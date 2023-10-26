from datetime import datetime

# Input the date in MM DD YYYY format
date_str = input("Enter the date (MM DD YYYY): ")

# Convert the input string to a datetime object
date = datetime.strptime(date_str, "%m %d %Y")

# Get the day of the week as a string
day_of_week = date.strftime("%A").upper()

# Print the day of the week in capital letters
print(day_of_week)

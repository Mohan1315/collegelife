from datetime import datetime

date_str = input("Enter the date (MM DD YYYY): ")

date = datetime.strptime(date_str, "%m %d %Y")

day_of_week = date.strftime("%A").upper()

print(day_of_week)

import re


def is_valid_phone_number(phone_number):
    
    pattern = r"^[6789]\d{9}$"

    
    if re.match(pattern, phone_number):
        return True
    else:
        return False


phone_number = input("Enter an Indian phone number: ")


phone_number = ''.join(filter(str.isdigit, phone_number))


if is_valid_phone_number(phone_number):
    print(f"{phone_number} is a valid Indian phone number.")
else:
    print(f"{phone_number} is not a valid Indian phone number.")

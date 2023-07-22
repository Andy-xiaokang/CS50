import validators
flag = validators.email(input("What's your email address? "))
if flag:
        print("Valid")
else:
        print("Invalid")
#Boolean - OR
in_str = input("Enter your ID: ")
real_tk = "tekdk__39"
real_dk = "DavidKim"
if in_str == real_tk or in_str == real_dk:
    print("Greeting !")
else:
    print("ID not authorized, Register first.")


#Boolean - AND
in_str1 = input("Enter your ID: ")
in_str2 = input("Enter your password: ")
real_tk = "tekdk__39"
pw_tk = "1234"
real_dk = "DavidKim"
pw_dk = "4321"
if in_str1 == real_tk or in_str1 == real_dk and in_str2 == pw_tk or in_str2 == pw_dk:
    print("Greeting !")
else:
    print("ID not authorized, Register first.")

#Boolean - OR
puts("Enter your ID")
input = gets.chomp()
real_tk = "tekdk__39"
real_dk = "DavidKim"
if input == real_tk or input == real_dk
    print("Greeting !\n")
else
    print("ID not authorized, Register first.\n")
end


#Boolean - AND
puts("Enter your ID: ")
input1 = gets.chomp()
puts("Enter your PW: ")
input2 = gets.chomp()
real_tk = "tekdk__39"
pw_tk = "1234"
real_dk = "DavidKim"
pw_dk = "4321"
if input1 == real_tk or input1 == real_dk and input2 == pw_tk or input2 == pw_dk
    print("Greeting !")
else
    print("ID not authorized, Register first.")
end

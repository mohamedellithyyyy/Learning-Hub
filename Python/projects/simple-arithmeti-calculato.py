# Python Calculator
Num1 = float(input("Enter the 1st Number : "))
operator = input("Enter an operator (+ - * /): ")
Num2 = float (input("Enter the 2nd Number : ")) 
if (operator == "+"):
    result = Num1 + Num2
    print(f"{Num1} + {Num2} = {result}")
elif (operator == "-"):
    result = Num1 - Num2
    print(f"{Num1} - {Num2} = {result}")
elif (operator == "*"):
    result = Num1 * Num2
    print(f"{Num1} * {Num2} = {result}")
elif (operator == "/"):
    if (Num2 == 0):
        print("You should Enter Number 2 != 0")
    else:
        result = Num1 / Num2
        print(f"{Num1} / {Num2} = {result}")
else: print(f"{operator} is not a vaild operator")

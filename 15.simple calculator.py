result=0
while True:
  
  num1 = float(input("enter 1st number: "))
  num2 = float(input("enter 2nd number: "))
  operation = input("enter any of the operation(+,-,*,/): ")
  if operation == "+":
    result = num1+num2
  elif operation == "-":
    result = num1-num2
  elif operation == "*":
    result = num1*num2
  elif operation == "/":
    result = num1/num2
  else:
    print("invalid input")
    
  print(result)

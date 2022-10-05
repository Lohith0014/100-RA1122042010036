principal = int(input("enter principal amount: "))
rate = int(input("enter rate of intrest: "))
time = int(input("enter no.of years: "))
simple_interest = (principal*rate*time)/100
amount = principal+simple_interest
print("simple interest is",simple_interest)
print("amount payable",amount)

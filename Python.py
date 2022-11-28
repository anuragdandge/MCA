import math

a = input("Enter Number 1  \n ")
b = input("Enter Number 2  \n ")
print("Before Swapping ",a,b)
a,b=b,a
print("After Swapping ",a,b)

pi = 3.14
r = input("Enter a Radius \n ") 
area = pi * (r*r)
print(" Area of Circle ",area)

num =input("Enter a Number \n ")
if num>0:
   print("Positive")
elif num == 0:
   print("Zero")
else:
   print("Negative")   

num = input("Enter a Number \n ")
if num%2 == 0:
    print("Even ")
else:
    print("Odd")    

num1= input("Enter num 1 ") 
num2= input("Enter num 3 ")
num3=input("Enter num 3 ")
max = max(num1,num2,num3)
print("Largest Num " , max)


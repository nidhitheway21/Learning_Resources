#Swappning values of two variables without using a third variable

#Python code (3 Approches)

#Approach 1 (Python assignment operator speciality)

 '''In Python but it is possible to assign multiple variables at the same time. 
 Python assigns values from right to left. When assigning multiple variables in 
 a single line, different variable names are provided to the left of the assignment 
 operator separated by a comma.'''

number1=int(input("Enter 1st no: "))  #input
number2=int(input("Enter 2nd no: "))  #input
print(f"Before swapping: {number1} {number2}")
number1,number2=number2,number1
print(f"After swapping: {number1} {number2}")




#Approach 2 (Arithmetic way)

'''
Simple arithmetic can be used to swap two values
ex: a=10 b=5
a=a+b    ==>    a=10+5    ==> a=15
b=a-b    ==>    b=15-5    ==> b=10
a=a-b    ==>    a=15-10   ==> a=5
'''

number1=int(input("Enter 1st no: "))  #input
number2=int(input("Enter 2nd no: "))  #input
print(f"Before swapping: {number1} {number2}")
number1=number1+number2
number2=number1-number2
number1=number1-number2
print(f"After swapping: {number1} {number2}")




#Approach 3 (Bitwise XOR)

'''The bitwise XOR operator can be used to swap two variables. 
The XOR of two numbers x and y returns a number that has all the 
bits as 1 wherever bits of x and y differ.'''

number1=int(input("Enter 1st no: "))  #input
number2=int(input("Enter 2nd no: "))  #input
print(f"Before swapping: {number1} {number2}")
number1=number1^number2
number2=number1^number2
number1=number1^number2
print(f"After swapping: {number1} {number2}")

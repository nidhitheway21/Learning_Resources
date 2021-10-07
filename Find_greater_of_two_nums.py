#Contribution by yashneet-kalra

#in-built function to find the MAX of 2 Numbers
print("BUILT-IN FUCNTION :- \n")
a = int(input("Enter the value of a : "))
b = int(input("Enter the value of b : "))
result = max(a, b)
print(f"The greater of the enterd 2 numbers is : {result}\n")



#user-defined function to find the MAX of 2 Numbers
def maximum(a, b):
     
    if a >= b:
        return a
    else:
        return b

print("USER-DEFINED FUCNTION :- \n")     
a = int(input("Enter the value of a : "))
b = int(input("Enter the value of b : "))
print(f"The greater of the enterd 2 numbers is : {maximum(a,b)}")

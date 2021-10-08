print("Enter the number till you want fibonacci series")
n = int(input())
a = 1
b = 1
print("The fibonacci sequence will be")
print(a)
print(b)
for i in range(2, n):
    fibonacci = a + b
    b = a
    a = fibonacci
    print(fibonacci)

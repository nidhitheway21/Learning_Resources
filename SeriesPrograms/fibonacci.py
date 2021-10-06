def fib(n: int):
    if n == 0:
        return 0
    elif n==1 or n==2:
        return 1
    return fib(n-1) + fib(n-2)

print('Enter the number of terms: ')
n = int(input())
for i in range(n):
    print(fib(i), end=" ")
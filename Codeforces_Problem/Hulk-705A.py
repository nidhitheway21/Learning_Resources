#https://codeforces.com/problemset/problem/705/A

n=int(input())
s="I hate"
s1=" it" 
S=s

def add(c):
    global S
    if c<n:
        S=S+" that I love"
        c+=1
        if c<n:
            S=S+" that I hate"
            c+=1
            add(c)
            
        else:
            print(S+s1)
    else:
        print(S+s1)

        
    
if n==1:
    print(s+s1)
else:
    add(1)

            
    
    
    

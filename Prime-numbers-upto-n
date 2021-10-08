//Given N to print all prime numbers from 1 to n using sieve of eratosthenes
#include<bits/stdc++.h>
#define ll long long int
#define ld double
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+1];
    a[0]=0;
    a[1]=0;
    for(int i=2;i<=n;i++)
    {
        a[i]=1;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(a[i]==1)
        {
            for(int j=2;i*j<=n;j++)
            {
                a[i*j]=0;
            }
        }
    }
    for(int i=0;i<=n;i++)
    {
        if(a[i]==1)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
/*INPUT
10

OUTPUT
2 3 5 7 

TIME COMPLEXITY OF THE PROGRAM
O(N log (log N))
*/

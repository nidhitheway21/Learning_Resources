// Program to print prime number using seive of Eranthosis
#include <iostream>
using namespace std;
void prime( int n)
{
    /* In this first we define an array and initialize that with 0 after that change value of places which is divisible by places whose square is less
       than given n number and print all numbers whose value is not changed*/
    int arr[10000] = {0};   // Array to find all prime number from 2 to n by changing its initial value 0 to 1 if number is not prime in the range
    for(int i=2 ; i<=n; i++)
    {
        if ( arr[i] == 0)               // If value of array at any number is 0 means either it is visited first time or it is a prime number
        {
            for(int j=i*i; j<=n; j+=i)  // All the multiple of that prime number is always not a prime number so changed all that to 1 from 0
            {
                arr[j] = 1;
            }
        }
        
    }
    for( int i=2; i<=n; i++)   // To print all prime numbers
    {
        if (arr[i] == 0)   // If at last value of array at any number in given range is 0 then that number must be a prime
        {
            cout << i << " ";
        }
        
    }
}
int main()
{
    int n;    // n is vaiable upto which prime number will be printed
    cin >> n;
    prime(n);  // Passing into the function
    return 0;
}

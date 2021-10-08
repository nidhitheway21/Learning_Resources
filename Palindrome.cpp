#include<iostream>
using namespace std;
int main()
{
    char str[20];
    int i,n,c;
    cout<<"Enter a string ";
    cin>>str;
    cout<<"Enter the number of characters ";
    cin>>n;
    cout<<"\nYour entered String is "<<str<<endl;
    for(i=0;i<n/2;i++)
    {
        if(str[i]==str[n-1])
        {
           c=1;
           n--;
        }
        else
        {
            c = 0;
            break;
        }
    }
    if(c == 1)
        cout<<"Palindrome!";
    else
        cout<<"Not a Palindrome!";
}

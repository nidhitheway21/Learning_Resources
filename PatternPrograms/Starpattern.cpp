#include <iostream>
using namespace std;
 int main()
   { int i,j,space;
     int n;
     cout<<"Enter the number of rows\n";
     cin>>n;
     for(i=1;i<=n;i++)
     { for(space=1;space<=n-i;space++)
       {cout<<" ";
       }
       for(j=1;j<=i;j++)
       {cout<<" *";
       }
      cout<<"\n";
    }
     
   }

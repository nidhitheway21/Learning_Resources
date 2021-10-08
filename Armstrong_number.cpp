#include <iostream>  
using namespace std;  
int main()  
{  
int num,rem,sum=0,temp;    
cout<<"Please Enter Your Number :  ";    
cin>>num;    
temp=num;    
while(num>0)    
{    
rem=num%10;    
sum=sum+(rem*rem*rem);    
num=num/10;    
}    
if(temp==sum)
{    
cout<<"Given number is Armstrong number."<<endl;    
}
else
{    
cout<<"Given number is Not Armstrong number."<<endl;  
} 
return 0;  
}  

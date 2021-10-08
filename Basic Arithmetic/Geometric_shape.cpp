// Program to calculate area of geometric figures in cpp.

#include<iostream>
using namespace std;
#include<math.h>
int main()
{
               int key;
               double area;
               cout<<"Press: 1 for [Circle]"<<"\n"
               <<"Press: 2 for [Square]"<<"\n"
               <<"Press: 3 for [Ractangle]"<<"\n"
               <<"Press: 4 for [Triangle]"<<"\n";
               cin>>key;

   switch (key)
   {
   case 1:
   {
        double r;const double pi=3.142;
           cout<<"Enter Radius:";
              cin>>r;
         area=pi*pow(r,2);  
       break;
   }
   case 2:
   {
        double l;
        cout<<"Enter length:";
           cin>>l;
        area=pow(l,2);
      break;   
   }
    case 3:
    {
        double l,w;
           cout<<"Enter length:";
              cin>>l;
           cout<<"Enter width:";
               cin>>w;
            area=l*w;
       break;
    }
    case 4:
    {
       double b,h;
         cout<<"Enter base:";
           cin>>b;
          cout<<"Enter height:";
             cin>>h;
         area=h*b/2;
          break;
    }
   default:
      cout<<"!!INVALID INPUT!!"<<endl;
       cout<<"Press only 1,2,3 or 4:";
       break;
   }
               
    cout<<"Area: "<<area<<endl;

        return 0;
}

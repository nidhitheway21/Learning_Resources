#include<iostream>
#include <cmath>
using namespace std;
int main() {
    int choice, a, b, z, i, f=1, flag=0, s=1, again=0;
    char repeat;
    do {
        cout<<endl<<"Select one of the operations from below:-";
        cout<<endl<<"1. Add";
        cout<<endl<<"2. Subtract";
        cout<<endl<<"3. Multipy";
        cout<<endl<<"4. Divide";
        cout<<endl<<"5. Power";
        cout<<endl<<"6. Factorial";
        cout<<endl<<"7. Fibonacci Series";
        cout<<endl<<"8. Prime check";
        cout<<endl<<"Enter the option number";
        cin>>choice;

        switch(choice) {
            case (1) : {
                cout<<endl<<"Enter the first number";
                cin>>a;
                cout<<endl<<"Enter the second number";
                cin>>b;
                z = a + b;
                cout<<"The SUM = "<<z;
                break;
            }
            case (2) : {
                cout<<endl<<"Enter the first number";
                cin>>a;
                cout<<endl<<"Enter the second number";
                cin>>b;
                z = a - b;
                cout<<"The RESULT = "<<z;
                break;
            }
            case (3) : {
                cout<<endl<<"Enter the first number";
                cin>>a;
                cout<<endl<<"Enter the second number";
                cin>>b;
                z = a * b;
                cout<<"The RESULT = "<<z;
                break;
            }
            case (4) : {
                cout<<endl<<"Enter the first number";
                cin>>a;
                cout<<endl<<"Enter the second number";               
				cin>>b;
                z = a / b;
                cout<<"The RESULT = "<<z;
                break;
            }
            case (5) : {
                cout<<endl<<"Enter the number";
                cin>>a;
                cout<<endl<<"Enter the exponent";
                cin>>b;
                z = pow(a, b);
                cout<<"Exponential number = "<<z;
                break;
            }
            case (6) : {
                cout<<endl<<"Enter the integer";
                cin>>a;
                z=a;
                for (i=a;i>=2;i--) {
                    a = a * (i-1);    
                }
                cout<<"The FACTORIAL of"<<z<<" is "<<a;
                break;
            }
            case (7) : {
                cout<<endl<<"Enter the integer";
                cin>>a;
                for(i=1;i<=a;i++) {
                    z = f + s;
                    f=s;
                    s=z;
                }
                cout<<"FIBONACCI SERIES => "<<z;
                break;
            }
            case (8) : {
                cout<<endl<<"Enter the integer";
                cin>>a;
                for(i=2;i<=a/2;i++) {
                    if (a%i==0) {
                        cout<<endl<<" The number is PRIME.";
                        flag=1;
                        break;
                    }
                    if(flag==0) {
                        cout<<endl<<" The number is not PRIME.";
                        break;
                    }
                }
            }
        }
        cout<<endl<<" Continue operations? (Y/N)";
        fflush(stdin);
        cin>>repeat;
        if ((repeat == 'Y') || (repeat =='y')) {
            again = 1;
        }
        else
        {
            cout<<endl<<" EXITING";
            again = 0;
        }        
    } while (again == 1);
    cout<<endl<<" PROGRAM TERMINATED."; 
}

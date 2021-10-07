#include<stdio.h>
#include<math.h>

int main() {
    int choice, a, b, z, i, f=1, flag=0, s=1, again=0;
    char repeat;
    do {
        printf("\nSelect one of the operations from below:-");
        printf("\n1. Add");
        printf("\n2. Subtract");
        printf("\n3. Multipy");
        printf("\n4. Divide");
        printf("\n5. Sqaure Root");
        printf("\n6. Square");
        printf("\n7. Factorial");
        printf("\n8. Fibonacci Series");
        printf("\n9. Prime check");
        printf("\nEnter the option number");
        scanf("%d",&choice);

        switch(choice) {
            case (1) : {
                printf("\nEnter the first number");
                scanf("%d",&a);
                printf("\nEnter the second number");
                scanf("%d",&b);
                z = a + b;

                printf("The SUM = %d ",a,b,z);
                break;
            }
            case (2) : {
                printf("\nEnter the first number");
                scanf("%d",&a);
                printf("\nEnter the second number");
                scanf("%d",&b);

                z = a - b;
                printf("The RESULT = %d ",z);
                break;
            }
            case (3) : {
                printf("\nEnter the first number");
                scanf("%d",&a);
                printf("\nEnter the second number");
                scanf("%d",&b);

                z = a * b;
                printf("The RESULT = %d ",z);
                break;
            }
            case (4) : {
                printf("\nEnter the first number");
                scanf("%d",&a);
                printf("\nEnter the second number");               
				scanf("%d",&b);
                z = a / b;
                printf("The RESULT = ",z);
                break;
            }
            case (5) : {
                printf("\nEnter the integer");
                scanf("%d",&a);

                z = sqrt(a);
                printf("SQUARE ROOT = ",z);
                break;
            }
            case (6) : {
                printf("\nEnter the integer");
                scanf("%d",&a);

                z = a * a;
                printf("SQUARE = %d ",z);
                break;
            }
            case (7) : {
                printf("\nEnter the integer");
                scanf("%d",&a);
                z=a;
                for (i=a;i>=2;i--) {
                    a = a * (i-1);    
                }
                printf("The FACTORIAL of %d is %d",z,a);
                break;
            }
            case (8) : {
                printf("\nEnter the integer");
                scanf("%d",&a);

                for(i=1;i<=a;i++) {
                    z = f + s;
                    f=s;
                    s=z;
                }
                printf("FIBONACCI SERIES => %d ",z);
                break;
            }
            case (9) : {
                printf("\nEnter the integer");
                scanf("%d",&a);
                for(i=2;i<=a/2;i++) {
                    if (a%i==0) {
                        printf("\n The number is PRIME.");
                        flag=1;
                        break;
                    }
                    if(flag==0) {
                        printf("\n The number is not PRIME.");
                        break;
                    }
                }
            }
        }
        printf("\n Continue operations? (Y/N)");
        fflush(stdin);
        scanf("%c",&repeat);
        if ((repeat == 'Y') || (repeat =='y')) {
            again = 1;
        }
        else
        {
            printf("\n EXITING");
            again = 0;
        }        
    } while (again == 1);
    printf("\n PROGRAM TERMINATED."); 
}

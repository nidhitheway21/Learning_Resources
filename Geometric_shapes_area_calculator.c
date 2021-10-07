//Contribution by yashneet-kalra

#include <stdio.h>
#include<stdlib.h>
void main()
{
    int choice;
    float side, base, length, breadth, height, area, radius;
    char retry;
 
    do
    {
        printf("\n\tMENU :- \n\n");
        printf(" 1 --> Circle\n");
        printf(" 2 --> Rectangle\n");
        printf(" 3 --> Triangle\n");
        printf(" 4 --> Square\n");
        printf(" 5 --> Parallelogram\n");
        printf("\nEnter your choice : \n->");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            printf("Enter the value of radius : ");
            scanf("%f", &radius);
            area = 3.142 * radius * radius;
            printf("Area of a circle = %.2f\n", area);
            break;
        case 2:
            printf("Enter the breadth and length\n");
            scanf("%f %f", &breadth, &length);
            area = breadth * length;
            printf("Area of a Reactangle = %.2f\n", area);
            break;
        case 3:
            printf("Enter the base and height\n");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of a Triangle = %.2f\n", area);
            break;
        case 4:
            printf("Enter the value of side : ");
            scanf("%f", &side);
            area = side * side;
            printf("Area of a Square=%.2f\n", area);
            break;
        case 5:
            printf("Enter the values of base and height\n");
            scanf("%f %f", &base, &height);
            area = base * height;
            printf("Area of Parallelogram = %.2f\n", area);
            break;
        default:
            printf("Invalid value entered.\n");
            exit(1);
        }

        printf("\nWant to find area of another shape? (Y/N) -> ");
        fflush(stdin);
        scanf("%c", &retry);
    } while( retry == 'y' || retry == 'Y' );

    printf("\n\nThe Program Has Ended Successfully.");
}

//Contibution by yashneet-kalra

#include <stdio.h>
int find_GCD(int a, int b)
{
    int temp;

    while (b) {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int find_LCD(int a, int b)
{
    return (a * b) / find_GCD(a, b);
}

int main() 
{
    int a , b, gcd, lcd;

	printf("\nNote : Value of A must be GREATER than B.");
    printf("\nEnter the value of A : ");
    scanf("%d", &a);
    printf("\nEnter the value of B : ");
    scanf("%d", &b);
	gcd = find_GCD(a, b);
	lcd = find_LCD(a, b);
	printf("\nGCD is : %d",gcd);
	printf("\nLCD is : %d",lcd);

	return 0;
}

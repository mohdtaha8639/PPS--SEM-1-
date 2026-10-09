#include<stdio.h>
int main ()
{
    int n, original, reminder, sum = 0;
    printf("enter a number ");
    scanf("%d", &n);
    original = n;
    while (n != 0)
    {
        remainder = n % 10;
        sum = sum + remainder * remainder * remainder;
        n = n / 10;
    }
    if (sun ==original)
        printf ("%d is an aramstrong number.", original);
    else
        printf("%d is not an armstrong number.", original);
    return 0;
}

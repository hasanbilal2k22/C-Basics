#include<stdio.h>
int squaresum(int n);
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    printf("Sum of square of digits = %d",squaresum(x));
}
int squaresum(int n)
{
    if(n/10==0)
        return(n * n);
    return((n%10) * (n%10) +squaresum(n/10));
}
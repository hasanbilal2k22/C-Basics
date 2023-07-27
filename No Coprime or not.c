#include<stdio.h>
int main()
{
    int x,n;
    printf("Enter a number\n");
    scanf("%d",&x);
    for(n=2;n<=x-1; n++)
        if(x%n==0)
            break;
        if(n==x)
            printf("%d is not coprime number",x);
        else
            printf("%d is coprime number",x);


}
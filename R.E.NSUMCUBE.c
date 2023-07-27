#include<stdio.h>
int sumcube(int);
int main()
{
    printf("Sum of cube = %d",sumcube(2));
}

int sumcube(int n)
{
    if(n==1)
        return(1);
    return(n*n*n+sumcube(n-1));
}
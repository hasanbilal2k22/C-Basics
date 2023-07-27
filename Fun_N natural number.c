#include<stdio.h>

int sum (int N)
{
    int i,s=0;
    {
        for(i=1; i<=N; i++)
            s=s+i;
    }
    return(s);
}

int main()
{
    int a = sum(5);
    printf("%d",a);
}
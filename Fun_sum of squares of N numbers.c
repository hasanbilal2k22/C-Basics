#include<stdio.h>
void sum()
{
    int N,i,s=0;
    {
        printf("Enter a number");
        scanf("%d",&N);
        for(i=1; i<=N; i++)
            s=s+i*i;
        printf("%d",s);
    }
}
int main()
{
    sum();
}
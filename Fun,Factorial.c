#include<stdio.h>
int fact(int n)
{
    int i,f=1;
    for(i=1; i<=n; i++)
        f=f*i;
          return(f);
}
int main()
{
    int x,n;
    printf("Enter a number");
    scanf("%d",&n);
    x=fact(n);
      printf("factorial = %d",x);
}
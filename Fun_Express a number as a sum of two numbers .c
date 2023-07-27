#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter a number");
    scanf("%d",&x);
    for(i=2; i<=(x-i); i=nextprime(i)) {
        if(isprime(x-i))
            printf("%d + %d = %d\n",i,x-i,x);
    }

}
int nextprime(int n)
{
    do
        n++;
    while(!isprime(n));
        return(n);
    }
int isprime(int n)
{
    int i;
    for(i=2; i<n; i++)
        if(n%i==0)
            return(0);
    return(1);
}
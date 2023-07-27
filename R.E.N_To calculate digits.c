int sum(int);
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    printf("Sum = %d",sum(x));
}
int sum(int x)
{
    if(x/10==0)
        return(x);
    return(x%10+sum(x/10));
}

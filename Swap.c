#include<stdio.h>
int main()
{
int a,b;
int temp;
printf("Enter two numbers");
scanf("%d%d",&a,&b);
printf("Numbers before swapping\ta=%d,b=%d",a,b);
temp=a;
a=b;
b=temp;
printf("Numbers after swapping\ta=%d,b=%d",a,b);
}	

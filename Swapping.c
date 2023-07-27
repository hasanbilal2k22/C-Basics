#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b;
	int temp;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	printf("Numbers Before swpping\ta=%d,b=%d",a,b);
	temp=("%d",a);
	a=("%d",b);
	b=temp;
	printf("Numbers after swapping \ta=%d,b=%d",a,b);
}
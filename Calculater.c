#include<stdio.h>
int main()
{
    int choice;
    printf("\t\t----------Simple Calculator----------\n");
    printf("1.Addition\n");
    printf("2.Subraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Table of a number\n");
    printf("6.calculate factorial of a number\n");
    printf("7.calculation of area of a circle\n");
    printf("8.A number is even or odd\n");
    printf("9.Even numbers between two numbers\n");
    printf("10.Odd numbers between two numbers\n");
    printf("11.calculate x power y\n");
    printf("12.LCM of a number\n");
    printf("13.HCF of a number\n");
    printf("14.Whether a number is prime or not\n");
    printf("15.Prime numbers between two numbers\n");
    printf("16.All Prime factors of a number\n");
    printf("17.Whether a number is coprime or not\n");
    printf("18.How many co-prime numbers do you want to print\n");
    printf("19.N terms of Fibonacci series\n");
    printf("20.Exit\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    {
        int a,b,c;
        printf("Enter two number\n");
        scanf("%d%d",&a,&b);
        c=a+b;
        printf("%d + %d = %d",a,b,c);
        break;
    }
    case 2:
    {
        int a,b,c;
        printf("Enter two number\n");
        scanf("%d%d",&a,&b);
        c=a-b;
        printf("%d - %d = %d",a,b,c);
        break;
    }
    case 3:
    {
        int a,b,c;
        printf("Enter two number\n");
        scanf("%d%d",&a,&b);
        c=a*b;
        printf("%d x %d = %d",a,b,c);
        break;
    }
    case 4:
    {
        float a,b,c;
        printf("Enter two number\n");
        scanf("%f%f",&a,&b);
        c=a/b;
        printf("%.4f ÷ %.4f = %.4f",a,b,c);
        break;
    }
    case 5:
    {
        int x,y,t=1;
        printf("Enter a number");
        scanf("%d",&x);
        y=x;
        while(t<=10)
        {
            printf("\n%d × %d = %d",x,t,y*t);
            t++;
        }
        break;

    }
    case 6:
    {
        int N, i, p = 1;
        printf("Enter a natural number\n");
        scanf("%d", &N);
        for (i = 1; i <= N; i++)
        {
            p = p * i;
        }
        printf("Factorial = %d\n", p);
        break;
    }
    case 7:
    {
        int r;
        float a;
        printf("Enter radius of a circle");
        scanf("%d",r);
        a=3.14*r*r;
        printf("Area of cirle = %.4f",a);
        break;
    }
    case 8:
    {

        int x;
        printf("Enter a number\n");
        scanf("%d",&x);
        if(x%2==0)
            printf("%d is an even number",x);
        else
            printf("%d is a odd number",x);
        break;
    }
    case 9:
    {
        int a,b,x,i;
        printf("Enter two numbers\n");
        scanf("%d%d",&a,&b);
        for(x=a+1; x<=b-1; x++) {
            if(x%2==0)
                printf("%d ",x);

        }
        break;
    }
    case 10:
    {
        int a,b,x;
        printf("Enter two numbers\n");
        scanf("%d%d",&a,&b);
        for(x=a+1; x<=b-1; x++) {
            if(x%2!=0)
                printf("%d ",x);
        }
        break;
    }
    case 11:
    {
        int x, y, i, p = 1;
        printf("Enter a number and its power\n");
        scanf("%d%d", &x, &y);
        for (i = 1; i <= y; i++)
        {
            p = p * x;
        }
        printf("Result is %d\n", p);
        break;
    }
    case 12:
    {
        int a,b,l;
        printf("Enter two numbers\n");
        scanf("%d%d",&a,&b);
        for(l=1; l<=a*b; l++)
            if(l%a==0 && l%b==0)
                printf("LCM = %d\n",l);
        break;
    }
    case 13:
    {
        int a,b,H;
        printf("Enter two numbers\n");
        scanf("%d%d",&a,&b);
        for(H=a<b?a:b; H>=1; H--) {
            if(a%H==0 && b%H==0)
                break;
        }

        printf("HCF = %d",H);
    }
    case 14:
    {
        int x,i;
        printf("Enter a number\n");
        scanf("%d",&x);
        for(i=2; i<=x-1; i++)
            if(x%i==0)
                break;
        if(i==x)
            printf("%d is a Prime number",x);
        else
            printf("%d is not a prime number",x);
        break;

    }
    case 15:
    {
        int a,b,x,i;
        printf("Enter two numbers\n");
        scanf("%d%d",&a,&b);
        for(x=a+1; x<=b; x++) {
            for(i=2; i<=x-1; i++) {
                if(x%i==0)
                    break;
            }
            if(i==x)
                printf("%d ",x);
        }

    }
    case 16:
    {
        int x,i;
        printf("Enter a number\n");
        scanf("%d",&x);
        for(i=2; x>1; i++)
            while(x%i==0)
            {
                printf("%d ",i);
                x=x/i;
            }
        break;

    }
    case 17:
    {
        int x,n;
        printf("Enter a number\n");
        scanf("%d",&x);
        for(n=2; n<=x-1; n++)
            if(x%n==0)
                break;
        if(n==x)
            printf("%d is not a coprime number",x);
        else
            printf("%d is a coprime number",x);
        break;

    }
    case 18:
    {
        int a=2,b,N;
        int min,i;
        printf("How many coprime numbers do you want to print\n");
        scanf("%d",&N);
        while(N) {
            for(b=2; b<=a; b++) {
                min=a<b?a:b;
                for(i=2; i<=min; i++) {
                    if(a%i==0 && b%i==0)
                        break;
                }
                if(i==min+1)
                {
                    printf("\n (%d %d)",a,b);
                    N--;
                }
            }
            a++;
        }


    }
    case 19:
    {
        int N,i,a=-1,b=1,c;
    printf("Enter a number\n");
    scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }
    break;
    }
    case 20:
    {
        exit(1);
    }
    default:
    {
        printf("Wrong choice");
    }
    }
}
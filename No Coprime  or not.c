#include<stdio.h>
int main()
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
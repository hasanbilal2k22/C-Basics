#include<stdio.h>
int main()
{
    int N,i;
    printf("Enter a number");
    scanf("%d",&N);
    for(i=N; i>=1; i--) {
        printf("%d ",2*i-1);
    }

}
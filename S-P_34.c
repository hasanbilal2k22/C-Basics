#include<stdio.h>
int main()
{
    int i,j,k=1,row,p;
    printf("Enter number of rows");
    scanf("%d",&row);
    for(i=1; i<=row; i++) {
        p=k;
        for(j=1; j<=i; j++) {
            printf("%d",p);
            p=p-(row-i+j);
        }
        printf("\n");
        k=k+1+row-i;
    }
}
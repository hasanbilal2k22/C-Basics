#include<stdio.h>
int main()
{
    int i,j,f,k=0,p;
    for(i=1; i<=5; i++) {
        if(i%2==1)
            k=k+1;
        else
        {
            k--;
            k=k+i;
        }
        f=1;
        p=k;
        for(j=1; j<=9; j++) {
            if(j<=2*i-1) {
                if(f==1) {
                    printf("%d",p);
                    if(i%2) {
                        p++;
                        k++;
                    }
                    else
                        p--;
                }
                else
                    printf("*");
                f=1-f;
            }
            else
                printf("");
        }
        printf("\n");
    }
}
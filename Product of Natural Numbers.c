#include <stdio.h>
int main()
{
	int N, i, p = 1;
	printf("Enter a natural number");
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
		p = p * i;
	}
	printf("product is %d\n", p);
}
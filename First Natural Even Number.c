#include <stdio.h>
int main()
{
	int N, s = 0, i;
	printf("Enter a natural number");
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
		s = s + i * 2;
	}
	printf(" %d", s);
}
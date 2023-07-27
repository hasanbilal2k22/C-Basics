#include <stdio.h>
int main()
{
	int x, y, i, p = 1;
	printf("Enter a number and its power\n");
	scanf("%d%d", &x, &y);
	for (i = 1; i <= y; i++)
	{
		p = p * x;
	}
	printf("Result is %d", p);
}
#include<stdio.h>

int main(void)
{
	int i, j;
	int N;

	scanf("%d", &N);

	for (i = 1; i <= N; i++)
	{
		for(j = N - i; j > 0; j--)
		{
			printf(" ");
		}

		for(j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
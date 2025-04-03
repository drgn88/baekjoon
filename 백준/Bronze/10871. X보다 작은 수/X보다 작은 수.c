#include <stdio.h>

int main(void)
{
	unsigned int N;
	unsigned int X;
	unsigned int A[10000] = { 0 };
	unsigned int min[10000] = { 0 };

	scanf("%d %d", &N, &X);

	int i;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
	}

	int inside = 0;
	for (i = 0; i < N; i++)
	{
		if (A[i] < X)
		{
			min[inside] = A[i];
			inside++;
		}
	}
	for (i = 0; i < inside; i++)
	{
		printf("%d ", min[i]);
	}
	
	return 0;
}
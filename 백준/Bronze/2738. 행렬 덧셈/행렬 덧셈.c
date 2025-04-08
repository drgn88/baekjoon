#include <stdio.h>

int main(void)
{
	int N, M;
	int arr1[100][100] = { 0 };
	int arr2[100][100] = { 0 };
	int sum[100][100] = { 0 };
	int i, j;
	scanf("%d %d", &N, &M);

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			scanf("%d", &arr2[i][j]);
		}
	}
	
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			sum[i][j] = arr1[i][j] + arr2[i][j];
		}
	}

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}

	return 0;
}
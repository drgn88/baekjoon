#include <stdio.h>

int main(void)
{
	int N, M;
	int i, j, k;
	int arr[100] = { 0 };

	scanf("%d %d", &N, &M);
	
	int l, o;
	for (l = 0; l < M; l++)
	{
		scanf("%d %d %d", &i, &j, &k);
		for (o = (i- 1); o <= (j - 1); o++)
		{
			arr[o] = k;
		}
	}

	for (i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
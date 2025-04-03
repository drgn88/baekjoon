#include <stdio.h>

int main(void)
{
	int N, M;
	int i, k, l;
	int o;
	int arr[100] = { 0 };
	scanf("%d %d", &N, &M);
	for (i = 0; i < N; i++)
	{
		arr[i] = i + 1;
	}

	int temp = 0;
	for (i = 0; i < M; i++)
	{
		scanf("%d %d", &k, &l);
		temp = arr[k-1];
		arr[k-1] = arr[l-1];
		arr[l-1] = temp;
	}

	for (i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
#include <stdio.h>
void reverse_arr(int a[]);

int main(void)
{
	int N, M;
	int arr[100] = { 0 };
	int i;

	scanf("%d %d", &N, &M);
	for (i = 0; i < N; i++)
	{
		arr[i] = i + 1;
	}

	for (i = 0; i < M; i++)
	{
		reverse_arr(arr);
	}

	for (i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

void reverse_arr(int a[])
{
	int i, j;
	int k, l;
	int temp = 0;

	scanf("%d %d", &i, &j);
	for (k = i - 1; k <= ((i + j - 2) / 2); k++)
	{
		temp = a[k];
		a[k] = a[(i + j - 2) - k];
		a[(i + j - 2) - k] = temp;
	}

	return;
}
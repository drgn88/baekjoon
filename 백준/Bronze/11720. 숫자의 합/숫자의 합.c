#include<stdio.h>

int main(void)
{
	int N;
	int i;
	int sum = 0;
	char arr[100] = { 0 };
	scanf("%d", &N);
	scanf(" %s", arr);

	for (i = 0; i < N; i++)
	{
		sum += (arr[i] % ('0'));
	}

	printf("%d", sum);
}
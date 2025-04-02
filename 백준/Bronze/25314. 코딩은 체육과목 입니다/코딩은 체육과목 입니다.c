#include <stdio.h>

int main(void)
{
	int N;
	int i;
	scanf("%d", &N);
	if ((N % 4) != 0)
	{
		return 0;
	}

	for (i = 0; i < (N / 4); i++)
	{
		printf("long ");
	}

	printf("int");

	return 0;
}
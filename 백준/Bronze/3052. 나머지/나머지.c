#include <stdio.h>

int main(void)
{
	int val[10] = { 0 };
	int i,j;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &val[i]);
	}

	for (i = 0; i < 10; i++)
	{
		val[i] = val[i] % 42;
	}

	int temp = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (val[j] > val[j + 1])
			{
				temp = val[j + 1];
				val[j + 1] = val[j];
				val[j] = temp;
			}
		}
	}

	int cnt = 1;
	for (i = 0; i < 9; i++)
	{
		if (val[i] != val[i + 1]) cnt++;
	}

	printf("%d", cnt);
	return 0;
}
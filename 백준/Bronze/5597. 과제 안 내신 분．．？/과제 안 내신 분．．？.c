#include <stdio.h>

int main(void)
{
	int student[30] = { 0 };
	int i;
	int pass;
	int fail[2] = { 0 };
	int min, max;
	for (i = 0; i < 30; i++)
	{
		student[i] = i + 1;
	}

	for (i = 0; i < 28; i++)
	{
		scanf("%d", &pass);
		student[pass - 1] = 0;
	}

	int k = 0;
	for (i = 0; i < 30; i++)
	{
		if (student[i] != 0)
		{
			fail[k] = student[i];
			k++;
		}
	}
	if (fail[0] > fail[1])
	{
		max = fail[0];
		min = fail[1];
	}
	else
	{
		max = fail[1];
		min = fail[0];
	}
	printf("%d\n", min);
	printf("%d\n", max);
	return 0;
}
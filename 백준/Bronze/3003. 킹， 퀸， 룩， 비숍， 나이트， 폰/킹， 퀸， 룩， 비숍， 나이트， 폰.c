#include <stdio.h>

int main(void)
{
	int white[6] = { 0 };
	int origin[6] = {1, 1, 2, 2, 2, 8 };
	int need[6] = { 0 };

	int i;
	for (i = 0; i < 6; i++)
	{
		scanf("%d", &white[i]);
	}

	for (i = 0; i < 6; i++)
	{
		need[i] = origin[i] - white[i];
	}

	for (i = 0; i < 6; i++)
	{
		printf("%d ", need[i]);
	}
	return 0;
}
#include <stdio.h>

int main(void)
{
	unsigned int arr[9] = { 0 };
	int i;
	for (i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
	}

	int temp = 0;
	int check = 0;

	for (i = 0; i < 9; i++)
	{
		if (temp < arr[i])
		{
			temp = arr[i];
			check = i + 1;
		}
	}

	printf("%d\n", temp);
	printf("%d\n", check);

	return 0;
}
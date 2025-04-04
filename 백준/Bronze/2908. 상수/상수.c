#include<stdio.h>

int main(void)
{
	char num_1[4] = { 0 };
	char num_2[4] = { 0 };
	char temp;
	char max[4] = { 0 };

	scanf(" %s %s", num_1, num_2);

	//num_1 reverse
	temp = num_1[2];
	num_1[2] = num_1[0];
	num_1[0] = temp;

	//num_2 reverse
	temp = num_2[2];
	num_2[2] = num_2[0];
	num_2[0] = temp;

	int i, j;
	for (i = 0; i <= 3; i++)
	{
		max[i] = num_2[i];
	}

	for (i = 0; i <= 3; i++)
	{
		if (num_2[i] > num_1[i])
		{
			break;
		}
		if (num_1[i] > num_2[i])
		{
			for (j = 0; j <= 3; j++)
			{
				max[j] = num_1[j];
			}
			break;
		}
	}

	printf("%s", max);
	
	return 0;
}
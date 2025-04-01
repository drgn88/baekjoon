#include <stdio.h>
int dice_prize(int arr[]);

int main(void)
{
	int dice[3];
	int i, j, k;
	scanf("%d %d %d", dice, &dice[1], &dice[2]);
	/*for (i = 1; i <= 6; i++)
	{
		for (j = 1; j <= 6; j++)
		{
			for (k = 1; k <= 6; k++)
			{
				dice[0] = i;
				dice[1] = j;
				dice[2] = k;
				printf("%d %d %d %d\n", i, j, k, dice_prize(dice));
			}
		}
	}*/
	printf("%d", dice_prize(dice));

	
	return 0;
}

int dice_prize(int arr[])
{
	int i, j;
	int check = 0;
	int temp;
	int same;

	for (i = 0; i < 2; i++)
	{
		for (j = i+1; j <= 2; j++)
		{
			if (arr[i] == arr[j])
			{
				check++;
				same = arr[i];
			}
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp; 
			}
		}
	}

	switch (check)
	{
	case 0: return (arr[2] * 100); break;
	case 1: return (1000 + same * 100); break;
	case 2: return (1000 + same * 100); break;
	case 3: return (10000 + arr[2] * 1000); break;
	default: return 0;
	}
	
}
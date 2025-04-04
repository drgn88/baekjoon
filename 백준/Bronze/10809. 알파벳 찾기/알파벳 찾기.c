#include<stdio.h>
int char_size(char arr[]);

int main(void)
{
	char c[101] = { 0 };
	int i, j;
	int num;
	scanf(" %s", &c);
	
	num = char_size(c);

	int cnt;
	for (i = 'a'; i <= 'z'; i++)
	{
		cnt = 0;
		for (j = 0; j < num; j++)
		{
			if (c[j] == i)
			{
				printf("%d ", j);
				break;
			}

			cnt++;
		}

		if (cnt == num)
		{
			printf("\-1 ");
		}
	}

	return 0;
}

int char_size(char arr[])
{
	int i;
	int check = 0;
	for (i = 0;; i++)
	{
		if (arr[i] == 0)
		{
			return check;
		}
		check++;
	}
}
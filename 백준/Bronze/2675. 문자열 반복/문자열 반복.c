#include<stdio.h>
int char_size(char arr[]);

int main(void)
{
	int T;
	int R;
	int i, j, k;
	int num;
	char S[21] = { 0 };
	
	scanf("%d", &T);

	for (i = 0; i < T; i++)
	{
		scanf("%d %s", &R, S);
		num = char_size(S);
		for (j = 0; j < num; j++)
		{
			for (k = 0; k < R; k++)
			{
				printf("%c", S[j]);
			}
		}
		printf("\n");
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
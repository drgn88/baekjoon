#include<stdio.h>
int char_size(char arr[]);

int main(void)
{
	int T;
	int num;
	char S[1001];


	scanf("%d", &T);

	int i;
	for (i = 0; i < T; i++)
	{
		scanf(" %s", S);
		num = char_size(S);
		if (num == 1)
		{
			printf("%c%c\n", S[0], S[0]);
		}
		else
		{
			printf("%c%c\n", S[0], S[num-1]);
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
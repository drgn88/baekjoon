#include<stdio.h>
int char_size(char arr[]);

int main(void)
{
	char S[101];
	int n;

	scanf(" %s", S);
	n = char_size(S);
	printf("%d\n", n);
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
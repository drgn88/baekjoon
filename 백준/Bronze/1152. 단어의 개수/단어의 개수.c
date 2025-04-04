#include<stdio.h>
int char_size(char arr[]);
char S[1000001] = { 0 };

int main(void)
{
	
	int num;
	int i;
	scanf("%[^\n]s", S);
	num = char_size(S);

	int cnt = 0;
	for (i = 0; i < num; i++)
	{
		if (S[i] == ' ')
		{
			cnt++;
		}
	}
	
	
	if (S[0] == ' ') cnt--;
	if (S[num-1] == ' ') cnt--;
	cnt++;

	printf("%d", cnt);

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
#include<stdio.h>
int char_size(char arr[]);

int main(void)
{
	int a;
	char A[101] = { 0 };
	int i, k;
	for (i = 0; i < 100; i++)
	{
		a = scanf("%[^\n]s", A);
		if (a != 1) return 0;
		printf("%s\n", A);
		getchar();
	}
	return 0;
}
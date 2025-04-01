#include <stdio.h>

int main(void)
{
	int n;
	int i;
	int acc_sum = 0;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		acc_sum += i;
	}

	printf("%d", acc_sum);
	return 0;
}
#include <stdio.h>

int main(void)
{
	int total_price;
	int N;
	int price, num;
	int acc_sum = 0;

	scanf("%d", &total_price);
	scanf("%d", &N);

	int i;
	for (i = 0; i < N; i++)
	{
		scanf("%d %d", &price, &num);
		acc_sum += (price * num);
	}
	if (acc_sum == total_price)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}
#include<stdio.h>

int main(void)
{
	int A, B;

	scanf("%d %d", &A, &B);
	printf("%d\n", A + B);
	for (;;)
	{
		if (scanf("%d %d", &A, &B) != (-1))
		{
			printf("%d\n", A + B);
		}
		else
		{
			break;
		}
	}
	return 0;
}
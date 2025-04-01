#include <stdio.h>

int main(void)
{
	int A, B;
	scanf("%d %d", &A, &B);

	if ((A < -10000) || (A > 10000)) return 0;
	if ((B < -10000) || (B > 10000)) return 0;

	if (A > B)
	{
		printf(">");
	}
	else if (A < B)
	{
		printf("<");
	}
	else printf("\==");

	return 0;
}
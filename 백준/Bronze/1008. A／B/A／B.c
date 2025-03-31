#include <stdio.h>

int main(void)
{
	int A, B;
	scanf("%d %d", &A, &B);
	double d = (double)A / (double)B;
	printf("%.9lf\n", d);

	return 0;
}
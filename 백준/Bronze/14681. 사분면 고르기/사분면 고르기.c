#include <stdio.h>
int quadrant(int a, int b);

int main(void)
{
	int x, y;
	scanf("%d",&x);
	scanf("%d",&y);
	printf("%d", quadrant(x, y));
	return 0;
}

int quadrant(int a, int b)
{
	if ((a > 0) && (b > 0))
	{
		return 1;
	}
	else if ((a < 0) && (b > 0))
	{
		return 2;
	}
	else if ((a < 0) && (b < 0))
	{
		return 3;
	}
	else
	{
		return 4;
	}
}
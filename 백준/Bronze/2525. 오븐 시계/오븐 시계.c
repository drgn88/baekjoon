#include <stdio.h>
void oven_timer(int a, int b, int c);

int main(void)
{
	int H, M, time;
	scanf("%d %d", &H, &M);
	scanf("%d", &time);
	oven_timer(H, M, time);
	return 0;
}

void oven_timer(int a, int b, int c)
{
	int over_hour = 0;
	int remain_min = 0;
	over_hour = c / 60;
	remain_min = c % 60;

	a += over_hour;
	b += remain_min;

	if (b >= 60)
	{
		a++;
		b -= 60;
	}
	if (a >= 24) a -= 24;
	printf("%d %d", a, b);
}
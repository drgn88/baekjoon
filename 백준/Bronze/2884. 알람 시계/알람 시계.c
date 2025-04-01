#include <stdio.h>
void alarm_45m(int a, int b);

int main(void)
{
	int H, M;
	scanf("%d %d", &H, &M);
	alarm_45m(H, M);
	return 0;
}

void alarm_45m(int a, int b)
{
	if (b < 45)
	{
		if (a == 0)
		{
			a = 24;
		}
		a--;
		b = (b + 60) - 45;
	}
	else
	{
		b = b - 45;
	}
	printf("%d %d", a, b);
}
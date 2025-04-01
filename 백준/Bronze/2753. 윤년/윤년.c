#include <stdio.h>
int leap_year(int num);

int main(void)
{
	int year;
	scanf("%d", &year);
	printf("%d", leap_year(year));
	return 0;
}

int leap_year(int num)
{
	if (((num % 4) == 0) && ((num % 100) != 0) || ((num % 400) == 0))
	{
		return 1;
	}
	else return 0;
}
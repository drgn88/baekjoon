#include <stdio.h>
char grade_decision(int num);

int main(void)
{
	int score;
	scanf("%d", &score);
	if ((score > 100) || (score < 0)) return 0;
	printf("%c", grade_decision(score));
	return 0;
}

char grade_decision(int num)
{
	int val = num / 10;

	switch (val)
	{
	case 10: return 'A'; break;
	case 9: return 'A'; break;
	case 8: return 'B'; break;
	case 7: return 'C'; break;
	case 6: return 'D'; break;
	default: return 'F'; break;
	}
}
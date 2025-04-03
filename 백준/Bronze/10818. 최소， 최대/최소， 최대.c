#include <stdio.h>
int ARR[1000000];

int main(void)
{
	int N;
	scanf("%d", &N);


	int i;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &ARR[i]);
	}

	if (N == 1)
	{
		printf("%d %d", ARR[0], ARR[0]);
		return 0;
	}

	//Max
	int temp = 0;
	for (i = 0; i <= N - 2; i++)
	{
		if (ARR[i] > ARR[i + 1])
		{
			temp = ARR[i + 1];
			ARR[i + 1] = ARR[i];
			ARR[i] = temp;
		}
	}

	int max = ARR[N - 1];

	//Min
	temp = 0;
	for (i = 0; i <= N - 2; i++)
	{
		if (ARR[i] < ARR[i + 1])
		{
			temp = ARR[i + 1];
			ARR[i + 1] = ARR[i];
			ARR[i] = temp;
		}
	}

	int min = ARR[N - 1];

	printf("%d %d", min, max);

	return 0;
}
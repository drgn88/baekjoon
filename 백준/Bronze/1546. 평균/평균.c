#include <stdio.h>

int main(void)
{
	int N;
	double M;
	int i, j;
	int check = 0;
	double score[10000] = { 0 };

	scanf("%d", &N);
	
	for (i = 0; i < N; i++)
	{
		scanf("%lf", &score[i]);
	}
	
	//모두 0점인 경우 거르기
	for (i = 0; i < N; i++)
	{
		if (score[i] == 0) check++;
	}

	/*if (check == N)
	{
		printf("ERROR\n");
		return 0;
	}*/

	//score 정렬(MAX 값 찾기)
	double temp = 0;
	for (i = 0; i < N; i++)
	{
		for (j = i + 1; j < N; j++)
		{
			if (score[i] > score[j])
			{
				temp = score[i];
				score[i] = score[j];
				score[j] = temp;
			}
		}
	}

	M = score[N - 1];

	//점수 조작
	for (i = 0; i < N; i++)
	{
		score[i] = (score[i] / M) * 100;
	}

	//평균 구하기
	double sum = 0;
	for (i = 0; i < N; i++)
	{
		sum += score[i];
	}

	double avg;
	avg = sum / N;

	printf("%lf\n", avg);
	return 0;
}
#include <stdio.h>

int main(void)
{
	int T;
	int A, B;
	int i;
	int arr[100] = { 0 };

	scanf("%d", &T);

	for (i = 0; i < T; i++)
	{
		scanf("%d %d", &A, &B);
		arr[i] = A + B;
	}

	for (i = 0; i < T; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
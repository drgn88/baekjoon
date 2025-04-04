#include<stdio.h>
int char_size(char arr[]);
int char_2_num(char c);
int take_time(int n);

int main(void)
{
	char number[16] = { 0 };
	char num_2_real[16] = { 0 };
	int i;
	int many;
	int acc_time = 0;

	scanf(" %s", number);
	many = char_size(number);

	for (i = 0; i < many; i++)
	{
		num_2_real[i] = char_2_num(number[i]);
	}

	for (i = 0; i < many; i++)
	{
		acc_time += take_time(num_2_real[i]);
	}

	printf("%d", acc_time);

	return 0;
}

int char_size(char arr[])
{
	int i;
	int check = 0;
	for (i = 0;; i++)
	{
		if (arr[i] == 0)
		{
			return check;
		}
		check++;
	}
}

int char_2_num(char c)
{
	switch (c)
	{
	case 'A': return 2; break;
	case 'B': return 2; break;
	case 'C': return 2; break;
	case 'D': return 3; break;
	case 'E': return 3; break;
	case 'F': return 3; break;
	case 'G': return 4; break;
	case 'H': return 4; break;
	case 'I': return 4; break;
	case 'J': return 5; break;
	case 'K': return 5; break;
	case 'L': return 5; break;
	case 'M': return 6; break;
	case 'N': return 6; break;
	case 'O': return 6; break;
	case 'P': return 7; break;
	case 'Q': return 7; break;
	case 'R': return 7; break;
	case 'S': return 7; break;
	case 'T': return 8; break;
	case 'U': return 8; break;
	case 'V': return 8; break;
	case 'W': return 9; break;
	case 'X': return 9; break;
	case 'Y': return 9; break;
	case 'Z': return 9; break;
	}
}

int take_time(int n)
{
	switch(n)
	{
	case 2: return 3; break;
	case 3: return 4; break;
	case 4: return 5; break;
	case 5: return 6; break;
	case 6: return 7; break;
	case 7: return 8; break;
	case 8: return 9; break;
	case 9: return 10; break;
	}
}
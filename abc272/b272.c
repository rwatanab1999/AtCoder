#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d", &N);

	int A;
	int first_g = 0;
	int second_g = 0;
	int g = 0;
	int first_k = 0;
	int second_k = 0;
	int k = 0;
	int flg;
	int i = 0;
	while (i < N)
	{
		scanf("%d", &A);
		if (A % 2 == 0)
		{
			if (A > second_g && A < first_g)
			{
				second_g = A;
			}
			else if (A > first_g)
			{
				second_g = first_g;
				first_g = A;
			}
			g = first_g + second_g;
		}
		else
		{
			if (A > second_k && A < first_k)
			{
				second_k = A;
			}
			else if (A > first_k)
			{
				second_k = first_k;
				first_k = A;
			}
			k = first_k + second_k;
		}
	}
	if (g >= k)
		printf("%d\n", g);
	else
		printf("%d\n", k);
}
#include <stdio.h>

int	main(void)
{
	int	N, Q;
	scanf("%d %d", &N, &Q);

	int n = 0;
	int L[N+1][(200000/N)];
	//printf("\n");
	while(n < N)
	{
		scanf("%d", &L[n][0]);
		//printf("%d\n", L[n][0]);
		int i = 1;
		while(i <= L[n][0])
		{
			scanf("%d", &L[n][i]);
			//printf("%d\n", L[n][i]);
			i++;
		}
		//printf("\n");
		n++;
	}

	//printf("\n");
	int q = 0;
	int s, t;
	while(q < Q)
	{
		scanf("%d %d", &s, &t);
		printf("%d\n", L[s - 1][t]);
		q++;
	}
	return (0);
}
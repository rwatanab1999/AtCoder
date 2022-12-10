#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	while(1)
	{
		printf("%d\n", n);
		n--;
		if(n == -1)
			break;
	}
	return (0);
}
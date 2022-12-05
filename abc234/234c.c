#include <stdio.h>

int bit[1000000];

int main(void)
{
    long long n, i, amr, tmp;
    scanf("%lld", &n);
    for(i = 0; n != 0; i++)
    {
        amr = n % 2;
        bit[i] = amr;
        n = n / 2;
    }
    for(i = i - 1; i >= 0; i--)
    {
        printf("%d", bit[i] * 2);
    }
    printf("\n");
    return (0);
}

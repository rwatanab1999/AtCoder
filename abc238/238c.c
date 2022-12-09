#include <stdio.h>
#include <math.h>

int M = 998244353;

unsigned long long func(unsigned long long n, int i)
{
    unsigned long long N;
    if (n > 9)
    {
        N = n - (unsigned long long)pow(10, i) + 1;
    }
    else
        N = n;
    //printf("func(%llu, %d) = %llu\n", n, i, N);

    return (((((N%M)*((N+1)%M))%M)*499122177)%M);
}

int main(void)
{
    unsigned long long n;
    scanf("%llu", &n);

    int i = 0;
    unsigned long long x = n;
    //printf("n = %llu\n", x);
    while(x > 9)
    {
        x = x / 10;
        if(x == 0)
            break;
        else
            i++;
    }
    //printf("i = %d\n", i);
    unsigned long long g = 0;
    while(i >= 0)
    {
        g = (g + func(n, i))%M;
        n = (unsigned long long)pow(10, i) - 1;
        i--;
    }
    unsigned long long ans = g;
    printf("%llu\n", ans);

    return (0);
}
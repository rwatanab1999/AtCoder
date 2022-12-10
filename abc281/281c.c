#include <stdio.h>

int main(void)
{
	unsigned long long n, t, i, sum, total, re, re_time;
	scanf("%llu %llu", &n, &t);
    int a[n];
    total = 0;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        total = total + a[i];
    }
    re = t / total;
    re_time = re * total;
    t = t - re_time;

    sum = 0;
    i = 0;
    while(1)
    {
        sum = sum + a[i];
        if(t < sum)
        {
            printf("%llu %llu\n", i + 1, (t - (sum - a[i])));
            return (0);
        }
        if(i == n - 1)
            i = 0;
        else
            i++;
    }

    return (0);
}
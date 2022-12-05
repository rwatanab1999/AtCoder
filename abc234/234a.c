#include <stdio.h>

unsigned long long func(unsigned long long t)
{
    unsigned long long ans;
    ans = t * t + 2 * t + 3;
    return (ans);
}

int main(void)
{
    unsigned long long t, ans;
    scanf("%llu", &t);
    ans = func(func(func(t) + t) + func(func(t)));
    printf("%llu\n", ans);
    return (0);
}
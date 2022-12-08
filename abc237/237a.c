#include <stdio.h>
#include <math.h>

int main(void)
{
    long long n;
    double min, max;
    scanf("%lld", &n);
    min = pow(-2, 31);
    max = pow(2, 31);
    if(min <= n && n < max)
        printf("Yes\n");
    else
        printf("No\n");
    return (0);
}
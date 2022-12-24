#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b;
    int ans;
    scanf("%lf%lf", &a, &b);
    ans = pow(a, b);

    printf("%d\n", ans);
    return (0);
}
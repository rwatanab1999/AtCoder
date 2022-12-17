#include <stdio.h>
#include <math.h>

int main(void)
{
    double h, ans;
    scanf("%lf", &h);
    ans = h * (12800000 + h);
    ans = sqrt(ans);
    printf("%lf\n", ans);

    return (0);
}
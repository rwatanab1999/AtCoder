#include <stdio.h>
#include <math.h>

double dist_sq(double a, double b, double c, double d)
{
    return pow((a - c), 2) + pow((b - d), 2);
}

void solve(double x1, double y1, double x2, double y2)
{
    for(int x = x1 - 2; x < x1 + 3; x++)
    {
        for(int y = y1 - 2; y < y1 + 3; y++)
        {
            if (dist_sq(x, y, x1, y1) == dist_sq(x, y, x2, y2) && dist_sq(x, y, x1, y1) == 5)
            {
                printf("Yes\n");
                return ;
            }
        }
    }
    printf("No\n");
    return ;
}

int main(void)
{
    double x1, y1, x2, y2;
    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
    solve(x1, y1, x2, y2);
    return (0);
}
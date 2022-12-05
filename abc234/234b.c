#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    double dot[n][2];
    int i ,j;
    for(i = 0; i < n; i++)
        scanf("%lf %lf", &dot[i][0], &dot[i][1]);
    double len = 0;
    double len_max = 0;
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            len = pow((dot[i][0] - dot[j][0]), 2) + pow((dot[i][1] - dot[j][1]), 2);
            if(len > len_max)
                len_max = len;
        }
    }
    printf("%lf\n", sqrt(len_max));
    return (0);
}
#include <stdio.h>

int main(void)
{
    int x, y, i;
    i = scanf("%d", &x);
    if (x < 0 || x > 10)
        return (0);
    if (x == 0)
    {
        printf("1\n");
        return (0);
    }
    y = 1;
    while (x >= 1)
    {
        y = y * x;
        x--;
    }
    printf("%d\n", y);
    return (0);
}
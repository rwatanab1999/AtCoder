#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a - b == -1 || a - b == 1)
        printf("Yes\n");
    else if((a == 1 && b == 10) || (a == 10 && b == 1))
        printf("Yes\n");
    else
        printf("No\n");

    return (0);
}
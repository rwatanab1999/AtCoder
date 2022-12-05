//abc bca cab

#include <stdio.h>

int main(void)
{
    char num[3];
    scanf("%s", num);
    int a, b, c, ans;
    a = num[0] - '0';
    b = num[1] - '0';
    c = num[2] - '0';
    ans = (100 * a + 10 * b + c) + (100 * b + 10 * c + a) + (100 * c + 10 * a + b);
    printf("%d\n", ans);
    return (0);
}
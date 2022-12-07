#include <stdio.h>

int main(void)
{
    char s[10];
    int a, b;
    char c;
    scanf("%s %d %d", s, &a, &b);
    c = s[a - 1];
    s[a - 1] = s[b - 1];
    s[b - 1] = c;
    printf("%s\n", s);
    return (0);
}
#include <stdio.h>

void func(char *s, int si, int n, int *count)
{
    if (si == n)
    {
        if(*count == n)
            printf("%d", si);
        else
            printf("%d ", si);
        (*count)++;
    }
    else if(s[si] == 'L')
    {
        func(s, si + 1, n, count);
        if(*count == n)
            printf("%d", si);
        else
            printf("%d ", si);
        (*count)++;
    }
    else if(s[si] == 'R')
    {
        if(*count == n)
            printf("%d", si);
        else
            printf("%d ", si);
        (*count)++;
        func(s, si + 1, n, count);
    }
    return ;
}

int main(void)
{
    int n, i, c;
    scanf("%d", &n);
    char s[n + 1];
    scanf("%s", s);
    c = 0;
    i = 0;
    func(s, i, n, &c);

    return (0);
}
#include <stdio.h>

int main(void)
{
    int a, b, c, d, i, j;
    char s[10][10];
    
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    i = 0;
    while (i < 10)
    {
        scanf("%s", s[i]);
        //printf(">%s\n", s[i]);
        j = 0;
        while (j < 10)
        {
            if (s[i][j] == '#')
            {
                if (a == 0 || c == 0)
                {
                    a = i + 1;
                    c = j + 1;
                }
                b = i + 1;
                d = j + 1;
            }
            j++;
        }
        i++;
    }
    printf("%d %d\n%d %d\n", a, b, c, d);
    return (0);
}
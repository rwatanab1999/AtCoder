#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    //printf("%s\n", s);

    int flg = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == ',' && flg == 0)
            s[i] = '.';
        if(s[i] == '\"' && flg == 0)
            flg = 1;
        else if(s[i] == '\"' && flg == 1)
            flg = 0;
    }
    printf("%s\n", s);

    return (0);
}
#include <stdio.h>
#include<string.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    char s[n][15];
    char t[15];
    int i, j;
    for(i = 0; i < n; i++)
        scanf("%s", s[i]);
    i = 0;
    for(j = 0; j < m; j++)
    {
        scanf("%s", t);
        while(strcmp(s[i] ,t) != 0)
        {
            printf("No\n");
            i++;
        }
        printf("Yes\n");
        i++;
    }
    return (0);
}
#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d%d", &n, &m);
    char s[n][m];
    for(int i = 0; i < n; i++)
        scanf("%s", s[i]);

    int count = 0;
    for(int k = 0; k < n - 1; k++)
    {
        int t[m];
        for(int j = 0; j < m; j++)
        {
            if(s[k][j] == 'o')
                t[j] = 1;
            else
                t[j] = 0;
        }

        for(int l = k + 1; l < n; l++)
        {
            for(int j_l = 0; j_l < m; j_l++)
            {
                if(s[l][j_l] == 'x')
                {
                    if(t[j_l] == 0)
                    {
                        //printf(">>>>>>%d - %d\n", k+1, l+1);
                        break;
                    }
                }
                if(j_l == m - 1)
                {   
                    //printf("%d - %d\n", k+1, l+1);
                    count++;
                }
            }
        }
    }
    printf("%d\n", count);
    return (0);
}
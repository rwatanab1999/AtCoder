#include <stdio.h>

int main(void)
{
    int h, w;
    scanf("%d%d", &h, &w);
    int a[h][w];
    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
            scanf("%d", &a[i][j]);
    }
    for(int j = 0; j < w; j++)
    {
        for(int i = 0; i < h; i++)
        {
            if(i == 0)
                printf("%d", a[i][j]);
            else
                printf(" %d", a[i][j]);
        }
        printf("\n");
    }
    return (0);
}
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int h[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &h[i]);
    int tmp = h[0];
    for(int i = 1; i < n; i++)
    {
        if(tmp < h[i])
            tmp = h[i];
        else
            break;
    }
    printf("%d\n", tmp);
    return (0);
}
#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int a[n];
    memset(a, 0, n*sizeof(a[0]));
    int num;
    for(int i = 0; i < 4 * n - 1; i++)
    {
        scanf("%d", &num);
        a[num - 1]++;
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 3)
        {
            printf("%d\n", i + 1);
            break;
        }
    }
    return (0);
}
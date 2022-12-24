#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int q;
    scanf("%d", &q);

    int num, k, x;
    for(int i = 0; i < q; i++)
    {
        scanf("%d", &num);
        if(num == 1)
        {
            scanf("%d %d", &k, &x);
            a[k-1] = x;
        }
        else
        {
            scanf("%d", &k);
            printf("%d\n", a[k-1]);
        }
    }

    return (0);
}
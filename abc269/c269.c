#include <stdio.h>
#include <string.h>
int count = 0;

void func(int *n, int j, int i)
{
    int box[61];
    memcpy(box, n, sizeof(int) * 61 );

    if (box[j] == 0 && j != 0)
    {
        func(box, j + 1, i);
        return ;
    }

    if (j == i)
    {
        int k = 0;
        while (k < i)
        {
            printf("%d", box[k]);
            k++;
        }
        //printf("\n");
    }
    else
    {
        box[j] = 0;
        func(box, j + 1, i);
        box[j] = 1;
        func(box, j + 1, i);
    }
}

int main(void)
{
    unsigned long long int N = 0;
    int n[61];

    scanf ("%lld", &N);

    int i = 0;
    while (N > 0)
    {
        n[i] = N % 2;
        N = N / 2;
        i++;
    }
    n[i] = '\n';

    printf(">");
    int k = 0;
    while (k < i)
    {
        printf("%d", n[k]);
        k++;
    }
    printf("\n");
    func(n, 0, i);

    return (0);
}
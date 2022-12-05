#include <stdio.h>

int main(void)
{
    unsigned long N;
    int i, count;
    unsigned long A[10];
    unsigned long B[10];
    scanf("%lu", &N);
    i = 0;
    while (i < N)
    {
        scanf("%lu", &A[i]);
        printf("%lu ", A[i]);
        i++;
    }
    i = 0;
    count = 0;
    while (i < N)
    {
        int j = 1;
        while (j < N)
        {
            if (A[i] < A[j])
            {
                count ++;
            }
            j++;
        }
        printf();
        i++;
    }

}
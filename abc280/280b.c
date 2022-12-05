#include <stdio.h>

int main(void)
{
    int count, S_i, S_j, A_i, A_j;
    scanf("%d", &count);
    scanf("%d", &S_i);
    A_i = S_i;
    printf("%d", A_i);
    count--;
    while(count > 0)
    {
        scanf("%d", &S_j);
        A_j = S_j - S_i;
        printf(" %d", A_j);
        S_i = S_j;
        A_i = A_j;
        count--;
    }
    printf("\n");
    return (0);
}
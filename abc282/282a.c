#include <stdio.h>

int main(void)
{
    int k;
    scanf("%d", &k);
    for(int i = 0; i < k; i++)
    {
        printf("%c", 'A'+i);
    }
    printf("\n");
    return (0);
}
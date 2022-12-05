#include <stdio.h>

int main(void)
{
    unsigned long long k, n, fact;
    scanf("%llu", &k);
    n = 1;
    fact = 1;
    while(1)
    {
        if(fact == k)
        {
            printf("%llu\n", n);
            break;
        }
        else if(k % n != 0)
        {
            n++;
        }
        else if(k % n == 0)
        {
            k = k / n;
            fact = fact * n;
            n++;
        }
    }
    return (0);
}
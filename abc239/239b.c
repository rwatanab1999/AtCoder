#include <stdio.h>

int main(void)
{
    long long x;
    scanf("%lld", &x);
    if(0 <= x)
    {
        x = x / 10;
        printf("%lld\n", x);
    }
    else
    {
        if((x % 10) == 0)
        {
            x = x / 10;
            printf("%lld\n", x); 
        }
        else
        {
            x = (x - 10) / 10;
            printf("%lld\n", x); 
        }
    }
    return (0);
}
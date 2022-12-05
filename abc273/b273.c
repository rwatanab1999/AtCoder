#include <stdio.h>
#include <math.h>

int main(void)
{
    unsigned long long x, a, s, j, pow;
    int k, i;
    int sr;
    sr = scanf("%llu %d", &x, &k);
    i = 0;
    pow = 1;
    while (i < k)
    {
        pow = pow * 10;
        a = x % pow;
        s = x / pow;
        if (a >= 5*pow/10)
            s = s + 1;
        x = s * pow; 
        i++;
    }
    printf("%llu\n", x); 
    
    return (0);
}
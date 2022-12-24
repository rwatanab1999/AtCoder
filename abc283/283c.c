#include <stdio.h>

int main(void)
{
    char c;
    int scanf_re;
    unsigned long long count = 0;

    while(1)
    {
        scanf_re = scanf("%c", &c);
        if(scanf_re == -1)
            break;
        if(c == '0')
        {
            count++;
            scanf_re = scanf("%c", &c);
            if(scanf_re == -1)
                break;
            else if(c != '0' && ('1' <= c && c <= '9'))
                count++;
        }
        else if('1' <= c && c <= '9')
            count++;
    }
    printf("%llu\n", count);

    return (0);
}
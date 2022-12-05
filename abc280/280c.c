#include <stdio.h>

char s[1000000];
char t[1000000];

int main(void)
{
    int index = 0;
    scanf("%s", s);
    scanf("%s", t);
    while(1)
    {
        if(s[index] != t[index])
            break;
        index++;
    }
    printf("%d\n", ++index);
    return (0);
}
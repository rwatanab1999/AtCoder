#include <stdio.h>

char s[1000000];

int main(void)
{
    int len = 0;
    scanf("%s", s);
    while(s[len] != '\0')
        len++;
    len--;
    int first_a = 0;
    int last_a = 0;
    int i = 0;
    while(s[i] == 'a')
    {
        first_a++;
        i++;
    }
    int j = len;
    while(s[j] == 'a')
    {
        last_a++;
        j--;
    }
    if(first_a > last_a)
    {
        printf("No\n");
        return (0);
    }
    len = len - (last_a - first_a);
    i = 0;
    j = len;
    while(s[i] == s[j])
    {
        if(i == j || (i + 1) == j || (i + 1) == (j - 1))
        {
            printf("Yes\n");
            return (0);
        }
        i++;
        j--;
    }
    printf("No\n");
    return (0);
}
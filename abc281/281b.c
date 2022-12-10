#include <stdio.h>

int main(void)
{
	char s[100];
	scanf("%s", s);

    if(s[0] < 'A' || 'Z' < s[0])
    {
        printf("No\n");
        return (0);
    }
    if(s[1] < '1' || '9' < s[1])
    {
        printf("No\n");
        return (0);
    }
    for(int i = 2; i <= 6; i++)
    {
        if(s[i] < '0' || '9' < s[i])
        {
            printf("No\n");
            return (0);
        }
    }
    if(s[7] < 'A' || 'Z' < s[7])
    {
        printf("No\n");
        return (0);
    }
    printf("Yes\n");
    return (0);
}
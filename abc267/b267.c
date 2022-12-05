#include <stdio.h>

int zero_check(char *s, char *t, int s_i, int t_i)
{
    if (s[s_i] == '0')
    {
        if (t[t_i] == '2')
            t[t_i] = '1';
        else
            t[t_i] = '0';
    }
    return (0);
}

int main(void)
{
    char s[10];
    char t[7] = {'1','1','2','2','2','1','1'};
    scanf("%s", s);
    printf("%s\n", s);
    printf("%s\n", t);

    if (s[0] == 1)
    {
        printf("No\n");
        return (0);
    }
    zero_check(s,t,0,3);
    printf("%s\n", t);
    zero_check(s,t,1,2);
    printf("%s\n", t);
    zero_check(s,t,2,4);
    printf("%s\n", t);
    zero_check(s,t,3,1);
    printf("%s\n", t);
    zero_check(s,t,4,3);
    printf("%s\n", t);
    zero_check(s,t,5,5);
    printf("%s\n", t);
    zero_check(s,t,6,0);
    printf("%s\n", t);
    zero_check(s,t,7,2);
    printf("%s\n", t);
    zero_check(s,t,8,4);
    printf("%s\n", t);
    zero_check(s,t,9,6);
    printf("%s\n", t);
    return (0);
}
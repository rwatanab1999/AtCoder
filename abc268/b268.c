#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100];
    char t[100];
    char *error1;
    char *error2;
    error1 = fgets(s, sizeof(s), stdin);
    error2 = fgets(t, sizeof(t), stdin);
    if (error1 == NULL || error2 == NULL)
        return 0;
    
    printf("%d\n", strncmp(s, t, strlen(s)-1));
    /*
    int i = 0;
    while (s[i] != '\n')
    {
        if (s[i] != t[i] || t[i] == '\n')
            return (printf("No\n"));
        i++;
    }
    printf("Yes\n");
    */
    return (0);
}
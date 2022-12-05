#include <stdio.h>

int main(void)
{
    int h, w, size, count;
    scanf("%d%d", &h, &w);
    size = h * w + h;
    char text;
    count = 0;
    for(int i = 1; i <= size; i++)
    {
        scanf("%c", &text);
        if(text == '#')
            count++;
    }
    printf("%d\n", count);
    return (0);
}
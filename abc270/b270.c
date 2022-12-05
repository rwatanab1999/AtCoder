#include <stdio.h>

int main(void)
{
    int X;
    int Y;
    int Z;
    int r;
    r = scanf("%d", &X);
    r = scanf("%d", &Y);
    r = scanf("%d", &Z);
    if (X > 0)
    {
        if ((0 < Y && Y < X) && (Y < Z))
            return (printf("%d\n", -1));
        else if (X < Y)
            return (printf("%d\n", X));
        else
            return (printf("%d\n", X - Z * 2));
    }
    else
    {
        if ((0 > Y && Y > X) && (Y > Z))
            return (printf("%d\n", -1));
        else if ((0 > Z && Z > Y) || ( Y > 0))
            return (printf("%d\n", -X));
        else
            return (printf("%d\n", -(X - Z * 2)));
    }
    
    return (0);
}
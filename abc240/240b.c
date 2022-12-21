#include <stdio.h>

int a[100000000];

void quicksort(int list[], int left, int right)
{
    int i, last;
    int temp;

    if (left >= right)
        return;

    last = left;
    for (i=left+1; i <= right; i++){
        if (list[i] < list[left] ){
            last++;
            temp=list[last];
            list[last]=list[i];
            list[i]=temp;
        }
    }

    temp=list[left];
    list[left]=list[last];
    list[last]=temp;

    quicksort(list, left, last-1);
    quicksort(list, last+1, right);
}

int main(void)
{
    int n;
    scanf("%d", &n);

    int i;
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    quicksort(a, 0, i-1);

    int tmp = a[0];
    int count = 1;
    for(i = 1; i < n; i++)
    {
        if(tmp < a[i])
        {
            count++;
            tmp = a[i];
        }
    }
    printf("%d\n", count);

    return (0);
}
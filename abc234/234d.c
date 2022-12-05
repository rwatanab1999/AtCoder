#include <stdio.h>

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

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int array[n];
    int priority_queue[k + 1];
    for(int i = 0; i < n; i++)
        scanf("%d", &array[i]);
    for(int i = 0; i < k; i++)
        priority_queue[i] = array[i];
    priority_queue[k] = -1;
    quicksort(priority_queue, 0, k);

    for(int i = k - 1; i < n; i++)
    {
        printf("%d\n", priority_queue[1]);
        priority_queue[0] = array[i + 1];
        
        for(int j = 0; (j + 1) <= k; j++)
        {
            if(priority_queue[j] > priority_queue[j + 1])
            {
                int tmp = priority_queue[j];
                priority_queue[j] = priority_queue[j + 1];
                priority_queue[j + 1] = tmp;
            }
            else
                break;
        }
    }
    return (0);
}
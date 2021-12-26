#include <stdio.h>

void maxHeapify(int *a, int i, int n)
{
    int j, temp;
    temp = a[i];
    j = 2 * i;
    while (j <= n)
    {
        if (j < n && a[j + 1] > a[j])
            j++;
        if (temp > a[j])
            break;
        else if (temp <= a[j])
        {
            a[j / 2] = a[j];
            j = 2 * j;
        }
    }
    a[j / 2] = temp;
    return;
}

int BinSearchMax(int *a, int n)
{
    int i;
    for (i = n / 2; i >= 1; i--)
        maxHeapify(a, i, n);
    return a[1];
}

int main(void)
{
    int n, i, max, x;
    int a[10];
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = BinSearchMax(a, n);
    printf("\nMax elements: %d\n", max);
}
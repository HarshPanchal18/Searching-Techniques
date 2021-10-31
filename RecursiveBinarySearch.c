#include <stdio.h>
int binary(int *, int, int, int, int);
int main(void)
{
    int i, n, m, c, l = 0;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int arr[n], u = n - 1;
    printf("\nEnter %d values\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nEnter the number to search : ");
    scanf("%d", &m);
    c = binary(arr, n, m, l, u);
    if (c == 0)
        printf("\n%d not found", m);
    else
        printf("\n%d is found", m);
}

int binary(int a[], int n, int m, int l, int u)
{
    int mid, c = 0;
    if (l <= u)
    {
        mid = (l + u) / 2;
        if (m == a[mid])
            c = 1;
        else if (m < a[mid])
            return binary(a, n, m, l, mid - 1);
        else
            return binary(a, n, m, mid + 1, u);
    }
    else
        return c;
}
#include <stdio.h>

int min(int a, int b)
{
    return (a < b ? a : b);
}

int BinarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        else if (arr[mid] < x)
            return BinarySearch(arr, l, mid - 1, x);

        else
            return BinarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int ExpoSearch(int arr[], int n, int x)
{
    if (arr[0] == x)
        return 0;

    int i = 1;
    while (i < n && arr[i] <= x)
        i = i * 2;

    return BinarySearch(arr, i / 2, min(i, n), x);
}

int main(void)
{
    int n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("\nEnter the elements in ascending order:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int x;
    printf("\nEnter the number to search for:\n");
    scanf("%d", &x);

    int res = ExpoSearch(arr, n, x);

    if (res == -1)
        printf("%d is not found\n", x);
    else
        printf("%d is found\n", x);
}
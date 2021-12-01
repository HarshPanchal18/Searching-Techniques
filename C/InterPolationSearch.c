#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int InterSearch(int arr[], int toFind, int size)
{
    int low = 0, mid;
    int high = size - 1;
    while (arr[low] <= toFind && arr[high] >= toFind)
    {
        if (arr[high] - arr[low] == 0)
            return (low + high) / 2;
        mid = low + ((toFind - arr[low]) * (high - low)) / (arr[high] - arr[low]);
        if (arr[mid] < toFind)
            low = mid + 1;
        else if (arr[mid] > toFind)
            high = mid - 1;
        else
            return mid;
    }
    if (arr[low] == toFind)
        return low;
    else
        return -1;
}

int main(void)
{
    int arr[MAX], number, i, pos;
    printf("\nEnter %d elements", MAX);
    for (i = 0; i < MAX; i++)
        scanf("%d", &arr[i]);

    printf("\nEnter the number you want to search for: ");
    scanf("%d", &number);
    pos = InterSearch(arr, number, MAX);
    if (pos == -1)
        printf("\nElement not found...");
    else
        printf("Found at index %d\n", pos + 1);
}
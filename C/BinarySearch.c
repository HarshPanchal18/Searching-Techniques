#include <stdio.h>

int main(void)
{
    char opt;
    int arr[10], i, n, item;
    int start, end, middle;

    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter %d element :", i + 1);
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\nEnter the element value to search : ");
        scanf("%d", &item);
        start = 0;
        end = n - 1;
        middle = (start + end) / 2;

        while (item != arr[middle] && start <= end)
        {
            if (item > arr[middle])
                start = middle + 1;
            else
                end = middle - 1;
            middle = (start + end) / 2;
        }
        if (item == arr[middle])
            printf("\n%d is found at %d\n", item, middle + 1);
        if (start > end)
            printf("\n%d is not found..", item);
        printf("\nPress Y to continue...");
        fflush(stdin);
        scanf("%c", &opt);
    } while (opt == 'y' || opt == 'Y');
}

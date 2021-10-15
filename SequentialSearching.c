#include <stdio.h>

int main(void)
{
    char opt;
    int i, n, item, arr[10];

    printf("\nEnter the number of elemants you want to add: ");
    scanf(" %d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter %d element: ", i + 1);
        scanf(" %d", &arr[i]);
    }
    i = 0;
    do
    {
        printf("\nEnter the value to search from the array: ");
        scanf("%d", &item);
        for (i = 0; i < n; i++)
        {
            if (arr[i] == item)
            {
                printf("\n %d found at position %d\n", item, i + 1);
                break;
            }
        }
        if (i == n)
            printf("\n %d is not found..", item);
        printf("\nDo you want to continue?: ");
        fflush(stdin);
        scanf("%c", &opt);
    } while (opt == 'y' || opt == 'Y');
}
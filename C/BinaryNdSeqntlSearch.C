#include <stdio.h>
#define MAX 5

int Bsearch(int nos[], int key)
{
    int l = 0, u = MAX - 1;
    int c, mid;
    while (l <= u)
    {
        mid = (l + u) / 2;
        if (key == nos[mid])
            return mid;
        else if (key <= nos[mid])
            u = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int SeqSearch(int nos[], int key)
{
    int i;
    for (i = 0; i < MAX; i++)
        if (key == nos[i])
            return i;
    return -1;
}

int main(void)
{
    int number[MAX];
    int i, index, key;
    printf("\nEnter %d numbers: \n", MAX);
    for (i = 0; i < MAX; i++)
        scanf("%d", &number[i]);
    printf("\nEnter a key to find using Linear(Sequential) search ");
    scanf("%d", &key);
    index = SeqSearch(number, key);
    if (index >= 0)
        printf("\n%d found at index %d using linear search\n\n", key, index + 1);
    else
        printf("\nNot Found\n");

    printf("\nBinary Search");
    printf("\nIndex is %d\n", index);
    printf("\nEnter %d numbers in ascending order\n", MAX);
    for (i = 0; i < MAX; i++)
        scanf("%d", &number[i]);

    index = Bsearch(number, key);
    if (index >= 0)
        printf("Found at index %d", index + 1);
    else
        printf("Not Found");
}

#include <stdio.h>
#include <stdlib.h>
#define SIZE 9

int partition(int A[SIZE], int low, int high)
{
    int x, i, j, temp;
    x = A[high];
    i = low - 1;
    for (j = low; j <= high - 1; j++)
    {
        if (A[j] <= x)
        {
            i++;
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    temp = A[i + 1];
    A[i + 1] = A[high];
    A[high] = temp;
    return i + 1;
}

int select(int A[SIZE], int low, int high, int i)
{
    int m, key;
    if (low == high)
        return A[low];

    m = partition(A, low, high);
    key = m - low + 1;
    if (i == key)
        return A[m];
    else if (i < key)
        return select(A, low, m - 1, i);
    else
        return select(A, m + 1, high, i - key);
}

int main(void)
{
    int A[SIZE]; // = {10, 55, 9, 4, 241, 30, 4022, 47, 34}; =>>  4,9,10,30,34,47,55,241,4022
    int low = 0, high;
    int i;
    printf("\nEnter 10 elements: \n");
    for (i = 0; i <= SIZE; i++)
    {
        printf("%d\t", i + 1);
        scanf("%d", &A[i]);
    }
    printf("\nEnter the number of Kth smallest element ( less than 11): ");
    scanf("%d", &i);
    high = SIZE;
    printf("\nThe element is %d", select(A, low, high, i));
}

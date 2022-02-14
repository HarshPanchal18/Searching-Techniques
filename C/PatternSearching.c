#include <stdio.h>
#include <string.h>

// Naive Pattern Searching algorithm
void search(char *pat, char *txt)
{
    int M = strlen(pat);
    int N = strlen(txt);
    int flag = 0;

    printf("\n");
    for (int i = 0; i <= N - M; i++) // A loop to slide pat[] one by one
    {
        int j;

        for (j = 0; j < M; j++) // For current index i, check for pattern match
            if (txt[i + j] != pat[j])
                break;

        if (j == M) // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
        {
            printf("%s found at index %d \n", pat, i);
            flag = 1;
        }
    }

    if (flag == 0)
        printf("\n%s is not Found in %s\n", pat, txt);

    printf("\n");
}

int main(void)
{
    char txt[] = "ThisErrorFreeCode";
    char pat[] = "e";

    search(pat, txt);
}

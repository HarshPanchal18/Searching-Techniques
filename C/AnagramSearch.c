#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100], temp;

    printf("Enter two strings: ");
    scanf("%s", s1);
    scanf("%s", s2);

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    // If both strings are of different length, then they are not anagrams
    if (len1 != len2)
    {
        printf("%s and %s are not anagrams\n", s1, s2);
        return 0;
    }

    // sort both string first
    for (int i = 0; i < len1 - 1; i++)
        for (int j = i + 1; j < len1; j++)
        {
            if (s1[i] > s1[j])
            {
                temp = s1[i];
                s1[i] = s1[j];
                s1[j] = temp;
            }
            if (s2[i] > s2[j])
            {
                temp = s2[i];
                s2[i] = s2[j];
                s2[j] = temp;
            }
        }

    // compare both string character by character
    for (int i = 0; i < len1; i++)
        if (s1[i] != s2[i])
        {
            puts("Strings are not anagram");
            return 0;
        }
    puts("Strings are anagrams!");

    return 0;
}
/*
Enter two strings: harsh
hrsah
Strings are anagrams!

Enter two strings: harsh
hrs
harsh and hrs are not anagrams
*/

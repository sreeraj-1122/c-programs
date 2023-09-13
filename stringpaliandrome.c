// check if a string is a Palindrome

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100], s2[100];
    printf("Enter the string:");
    gets(s1);
    strcpy(s2, s1);
    strrev(s2);
    if (strcmp(s1, s2) == 0)
    {
        printf("The string is a paliandrome.");
    }
    else
    {
        printf("The string is not a paliandrome.");
    }
    return 0;
}
// Check the given number is paliandrome or not

#include <stdio.h>
int main()
{
    int n, temp, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (temp == rev)
    {
        printf("Enterd number %d is an palindromic number", temp);
    }
    else
    {
        printf("Enterd number %d is not an palindromic number", temp);
    }
    return 0;
}
// Check the given number is amstrong or not

#include <stdio.h>
int main()
{
    int n, r, sum = 0, temp;
    printf("Enter the number:");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (temp == sum)
    {
        printf("Enterd number %d is an amstrong number", temp);
    }
    else
    {
        printf("Enterd number %d is not an amstrong number", temp);
    }
    return 0;
}
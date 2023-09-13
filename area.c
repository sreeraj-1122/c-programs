// Program to calculate the area of rectangle

#include <stdio.h>
void Area(int a, int b)
{
    int area1 = a * b;
    printf("Area of rectangle is %d", area1);
}
int main()
{
    int x, y;
    printf("Enter length and width of the rectangle:\n");
    scanf("%d %d", &x, &y);
    Area(x, y);
    return 0;
}

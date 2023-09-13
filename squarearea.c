//  Program to find the area of square

#include <stdio.h>
void SquareArea(int a)
{
    int area;
    area = a * a;
    printf("Area of square is %d", area);
}
void main()
{
    int length;
    printf("Enter the length  of side:");
    scanf("%d", &length);
    SquareArea(length);
}

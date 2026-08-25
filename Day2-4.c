#include<stdio.h>
int main()
{
    int radius, circumference, area;
    printf("Enter radius of circle: ");
    scanf("%d", &radius);
    circumference = 2 * 3.14 * radius;
    area = 3.14 * radius * radius;
    printf("Circumference: %d\n", circumference);
    printf("Area: %d\n", area);
    
    return 0;
}
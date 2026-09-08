#include <stdio.h>

int main()
{
    float r, area;

    printf("Enter radius: ");
    scanf("%f", &r);

    area = 3.14 * r * r;

    printf("Area of Circle = %.2f", area);

    return 0;
}
Output:
Enter radius: 5
Area of Circle = 78.50

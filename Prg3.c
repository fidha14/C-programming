#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("%d is Even", n);
    else
        printf("%d is Odd", n);

    return 0;
}
Output:
Enter a number: 7
7 is Odd

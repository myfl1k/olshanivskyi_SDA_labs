#include <stdio.h>

int main()
{
    int x2, functionY2;
    printf("Enter value of x: ");
    scanf("%d", &x2);

    if (x2 < -19 || (x2 > -3 && x2 <= 0))
    {
        functionY2 = 2 * (x2*x2*x2) + 8 * (x2*x2);
        printf("Fuction f(2x^3+8x^2) takes the value %d when x equals %d", functionY2, x2);
    }
    else
    {
        printf("x(%d) lies outside the range [-inf; -19) U (-3; 0]", x2);
    }
    return 0;
}
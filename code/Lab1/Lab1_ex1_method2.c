#include <stdio.h>

int main()
{
    int x1, functionY1;
    printf("Enter value of x: ");
    scanf("%d", &x1);

    if (x1 >= 8 && x1 < 23)
    {
        functionY1 = -5 * (x1*x1*x1) + 10;
        printf("Fuction f(-5x^3+10) takes the value %d when x equals %d", functionY1, x1);
        return 0;
    }
    printf("x(%d) lies outside the range [8; 23)", x1);
    
}
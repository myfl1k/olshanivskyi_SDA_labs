#include <stdio.h>
#define n 8

int main()
{
    int matrix[n][n];
    int lenght = sizeof(matrix[0]) / sizeof(matrix[0][0]) - 1;
    float Temp;

    for (int i = 0; i < lenght + 1; i++)
    {
        printf("Enter the %d value for row #%d of the matrix: ", n, i+1);
        for (int j = 0; j < lenght + 1; j++)
        {
            scanf("%d", &matrix[i][j]);
        }

    }

    printf("\n----------------------------------------\n");
    for (int i = 0; i < lenght+1; i++)
        {
            for (int j = 0; j < lenght+1; j++)
            {
                printf("| %d ", matrix[i][j]);
            }
            printf("\n----------------------------------------\n");
        }


    for (int i = 0; i < lenght; i++)
    {
        
        int cordX = lenght - i, cordY = i;
        for (int j = i+1; j <= lenght; j++)
        {
            
            if (matrix[lenght - j][j] < matrix[cordX][cordY])
            {
                cordX = lenght - j, cordY = j;
            }
            
        }
        
        Temp = matrix[lenght-i][i];
        matrix[lenght-i][i] = matrix[cordX][cordY];
        matrix[cordX][cordY] = Temp;
        
    }
    
    printf("\n----------------------------------------\n");
    for (int i = 0; i < lenght+1; i++)
        {
            for (int j = 0; j < lenght+1; j++)
            {
                printf("| %d ", matrix[i][j]);
            }
            printf("\n----------------------------------------\n");
        }
    return 0;

}
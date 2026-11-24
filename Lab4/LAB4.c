#include <stdio.h>
#define n 8

int main()
{
    
    double matrix[n][n];
    int length = sizeof(matrix[0]) / sizeof(matrix[0][0]) - 1;

    for (int i = 0; i < length + 1; i++)
    {
        printf("Enter the %d value for row #%d of the matrix: ", n, i+1);
        for (int j = 0; j < length + 1; j++)
        {
            scanf("%lf", &matrix[i][j]);
        }

    }

    // вивід матриці
    printf("\n----------------------------------------\n");
    for (int i = 0; i < length + 1; i++)
        {
            for (int j = 0; j < length + 1; j++)
            {
                printf("| %5.2f ", matrix[i][j]);
            }
            printf("|\n----------------------------------------\n");
        }

    // реалізація діапазону [0, 5]
    int left_border = 0, right_border = 5;

    int low_index = 0, 
    high_index = length, 
    index_search_item = -1;

    while (low_index <= high_index)
    {
        int mid_index = (low_index + high_index) / 2;
        int guess = matrix[mid_index][mid_index];

        if (guess >= left_border && guess <= right_border)
        {
            index_search_item = mid_index;
            high_index = mid_index - 1;
        }

        else if (guess > right_border)
        {
            low_index = mid_index + 1;
        }

        else
        {
            high_index = mid_index - 1;
        }
        
    }

    if (index_search_item != -1)
    {
        printf("Search number is %.2f and under index (%d, %d)\n", matrix[index_search_item][index_search_item], index_search_item, index_search_item);
    }
    else
    {
        printf("This array doesn't contain any numbers in the range[0, 5]");
    }
    
    return 0;
}
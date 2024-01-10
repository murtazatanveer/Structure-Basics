#include <stdio.h>
#include <stdbool.h>

// functions with arrays as parameters

void matrixMultipliedByScalar(int scalar, int m, int n, int matrix[][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = matrix[i][j] * scalar;
        }
    }
}
// Variable Length Array VLA
void print2DArray(int rows, int cols, int arr[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
}

// linear search
void updateArrayValuesByOne(int nums[], int size)
{
    for (int i = 0; i < size; i++)
    {
        ++nums[i];
    }
}

bool contains(int arr[], int size, int toFind)
{
    // go over each element in the array and compare it with the value to find
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == toFind)
        {
            return true;
        }
    }
    return false;
}

void demo2dArray()
{
    printf("-------------------------\n");
    // ask the user for matrix order (No of rows and cols);
    printf("Enter the order of the matrix as m*n");
    int m = 0, n = 0;
    scanf("%d*%d", &m, &n);
    if (m == 0 || n == 0)
    {
        printf("Error. Invalid order.\n");
        return;
    }
    // create the 2D array to hold the matrix values
    int matrix[m][n];
    // populate the matrix with user provided values
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter value to be store in matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("-------------------------\n");
}

int main()
{
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int x = 4;
    printf("Before:\n");
    print2DArray(2, 3, matrix);
    matrixMultipliedByScalar(x, 2, 2, matrix);
    printf("\nAfter:\n");
    print2DArray(2, 3, matrix);

    // int numbers[5] = {10, 20, 15, 21, 45};
    // printf("Before.\n");
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d, ", numbers[i]);
    // }
    // printf("\n");
    // updateArrayValuesByOne(numbers, 5);
    // printf("Before.\n");
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d, ", numbers[i]);
    // }
    // printf("\n");

    // printf("Enter a number to be searched for: ");
    // int number;
    // scanf("%d", &number);
    // bool isFound = contains(numbers, 5, number);
    // if (isFound)
    // {
    //     printf("Number was found!");
    // }
    // else
    // {
    //     printf("Number was NOT found!");
    // }

    // demo2dArray();

    // int matrix[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int secondMatrix[][3] = {1, 2, 3, 4, 5, 6, 7};

    // // Outer index is used in selecting the row (inner array)
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         // i -row index, j column-index
    //         printf("%d\t", secondMatrix[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf("%d", secondMatrix[0][0]);
    // printf("%d", secondMatrix[0][1]);
    // printf("%d", secondMatrix[0][2]);

    // printf("%d", secondMatrix[1][0]);
    // printf("%d", secondMatrix[1][1]);
    // printf("%d", secondMatrix[1][2]);

    // printf("%d", secondMatrix[2][0]);
    // printf("%d", secondMatrix[2][1]);
    // printf("%d", secondMatrix[2][2]);
}
#include <stdio.h>

int main()
{
    int rows, cols;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[100][100];

    // Input the matrix elements
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int maxSum = 0;
    int rowWithMaxSum;
    // Calculate the sum of each row and find the row with the maximum sum
    for (int i = 0; i < rows; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < cols; j++)
        {
            rowSum += matrix[i][j];
        }
        if (rowSum > maxSum)
        {
            maxSum = rowSum;
            rowWithMaxSum = i;
        }
    }

    // Print the row number and the row sum
    printf("Row with maximum sum is row %d with a sum of %d.\n", rowWithMaxSum + 1, maxSum);

    return 0;
}

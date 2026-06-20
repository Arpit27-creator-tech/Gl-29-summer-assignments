//programme to find diagonal sum of a matrix

#include <iostream>

using namespace std;

void diagonalSum(int matrix[10][10], int rows, int cols)
{
    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int i = 0; i < rows; i++)
    {
        primaryDiagonalSum += matrix[i][i];
        secondaryDiagonalSum += matrix[i][cols - 1 - i];
    }

    cout << "Primary Diagonal Sum: " << primaryDiagonalSum << endl;
    cout << "Secondary Diagonal Sum: " << secondaryDiagonalSum << endl;
}

int main()
{
    int matrix[10][10];
    int rows, cols;

    cout << "Enter the number of rows and columns for the matrix: ";
    cin >> rows >> cols;

    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    diagonalSum(matrix, rows, cols);

    return 0;
}
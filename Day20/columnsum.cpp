//programme to find column sum of a matrix

#include <iostream>

using namespace std;


void columnSum(int matrix[10][10], int rows, int cols)
{
    for (int j = 0; j < cols; j++)
    {
        int sum = 0;
        for (int i = 0; i < rows; i++)
        {
            sum += matrix[i][j];
        }
        cout << "Sum of column " << j + 1 << ": " << sum << endl;
    }
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

    columnSum(matrix, rows, cols);

    return 0;
}
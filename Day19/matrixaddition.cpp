//programme to add two matrices
#include <iostream>
using namespace std;

void addMatrices(int matrix1[][10], int matrix2[][10], int result[][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main()
{
    int matrix1[10][10], matrix2[10][10], result[10][10];
    int rows, cols;

    cout << "Enter the number of rows and columns for the matrices: ";
    cin >> rows >> cols;

    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    addMatrices(matrix1, matrix2, result, rows, cols);

    cout << "Resultant matrix after addition:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
//programme to transpose a matrix

#include <iostream>

using namespace std;

void transposeMatrix(int matrix[10][10], int transposed[10][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main()
{
    int matrix[10][10], transposed[10][10];
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

    transposeMatrix(matrix, transposed, rows, cols);

    cout << "Transposed matrix:" << endl;
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
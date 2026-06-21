//programme to check whether a matrix is symmetric or not

#include <iostream>

using namespace std;

bool isSymmetric(int matrix[10][10], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int matrix[10][10];
    int size;

    cout << "Enter the size of the square matrix: ";
    cin >> size;

    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix[i][j];
        }
    }

    if (isSymmetric(matrix, size))
    {
        cout << "The matrix is symmetric." << endl;
    }
    else
    {
        cout << "The matrix is not symmetric." << endl;
    }

    return 0;
}
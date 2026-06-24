//programme to check string rotation

#include <iostream>
using namespace std;

bool isRotation(char str1[], char str2[])
{
    int len1 = 0, len2 = 0;

    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;

    if (len1 != len2)
        return false;

    char* temp = new char[2 * len1 + 1];
    for (int i = 0; i < len1; i++)
        temp[i] = str1[i];
    for (int i = 0; i < len1; i++)
        temp[len1 + i] = str1[i];
    temp[2 * len1] = '\0';

    bool isSubstr = false;
    for (int i = 0; temp[i] != '\0'; i++)
    {
        int j;
        for (j = 0; str2[j] != '\0' && temp[i + j] == str2[j]; j++);
        if (str2[j] == '\0')
        {
            isSubstr = true;
            break;
        }
    }

    delete[] temp;
    return isSubstr;
}

int main()
{
    char str1[100], str2[100];

    cout << "Enter the first string: ";
    cin.getline(str1, 100);

    cout << "Enter the second string: ";
    cin.getline(str2, 100);

    if (isRotation(str1, str2))
    {
        cout << "The second string is a rotation of the first string." << endl;
    }
    else
    {
        cout << "The second string is not a rotation of the first string." << endl;
    }

    return 0;
}
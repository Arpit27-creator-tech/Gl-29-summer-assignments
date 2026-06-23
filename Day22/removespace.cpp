//function to remove spaces from a string

#include <iostream>

using namespace std;

void removeSpaces(char str[])
{
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; 
}

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    removeSpaces(str);
    cout << "String after removing spaces: " << str << endl;

    return 0;
}
//programme to find the lenght of string without uisng strlen() function

#include <iostream>

using namespace std;

int stringLength(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int length = stringLength(str);
    cout << "Length of the string: " << length << endl;

    return 0;
}
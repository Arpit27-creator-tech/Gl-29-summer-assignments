//programme to reverse a string without using strrev() function

#include <iostream>

using namespace std;

void reverseString(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    reverseString(str);
    cout << "Reversed string: " << str << endl;

    return 0;
}
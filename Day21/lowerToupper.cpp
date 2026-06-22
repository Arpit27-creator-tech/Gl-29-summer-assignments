//programme to conver a string from lower case to upper case

#include <iostream>

using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - ('a' - 'A');
        }
    }

    cout << "String in upper case: " << str << endl;

    return 0;
}
//programme to find first repeating character in a string

#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int count[256] = {0}; 

    cout << "Enter a string: ";
    cin.getline(str, 100);

    // Count the occurrences of each character
    for (int i = 0; str[i] != '\0'; i++)
    {
        count[(unsigned char)str[i]]++;
    }

    // Find the first repeating character
    char repeatingChar = '\0';
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (count[(unsigned char)str[i]] > 1)
        {
            repeatingChar = str[i];
            break;
        }
    }

    if (repeatingChar != '\0')
    {
        cout << "The first repeating character is: " << repeatingChar << endl;
    }
    else
    {
        cout << "There are no repeating characters in the string." << endl;
    }

    return 0;
}
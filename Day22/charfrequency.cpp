//funtion to find character frequency in a string

#include <iostream>

using namespace std;

int charFrequency(const char str[], char ch)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    char str[100];
    char ch;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Enter a character to find its frequency: ";
    cin >> ch;

    int frequency = charFrequency(str, ch);
    cout << "Frequency of '" << ch << "' in the string: " << frequency << endl;

    return 0;
}
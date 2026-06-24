//programme to find max occurring character in a string

#include <iostream>

using namespace std;

int main()
{
    char str[100];
    int count[256] = {0}; 

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++)
    {
        count[(unsigned char)str[i]]++;
    }

    // Find the maximum occurring character
    char maxOccurringChar = '\0';
    int maxCount = 0;
    for (int i = 0; i < 256; i++)
    {
        if (count[i] > maxCount)
        {
            maxCount = count[i];
            maxOccurringChar = (char)i;
        }
    }

    if (maxOccurringChar != '\0')
    {
        cout << "The maximum occurring character is: " << maxOccurringChar << endl;
        cout << "It occurs " << maxCount << " times." << endl;
    }
    else
    {
        cout << "The string is empty." << endl;
    }

    return 0;
}
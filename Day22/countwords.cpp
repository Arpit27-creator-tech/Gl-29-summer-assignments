//function to count the number of words in a string

#include <iostream>

using namespace std;

int countWords(const char str[])
{
    int count = 0;
    bool inWord = false;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && !inWord)
        {
            inWord = true;
            count++;
        }
        else if (str[i] == ' ')
        {
            inWord = false;
        }
    }

    return count;
}

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int wordCount = countWords(str);
    cout << "Number of words in the string: " << wordCount << endl;

    return 0;
}
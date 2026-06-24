//programme to check for longest word in a string

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[100];
    int maxLength = 0;
    char longestWord[100] = "";

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int length = 0;
    char currentWord[100] = "";

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            currentWord[length++] = str[i];
        }
        else
        {
            currentWord[length] = '\0'; 
            if (length > maxLength)
            {
                maxLength = length;
                strcpy(longestWord, currentWord);
            }
            length = 0; 
        }
    }

    
    currentWord[length] = '\0'; 
    if (length > maxLength)
    {
        maxLength = length;
        strcpy(longestWord, currentWord);
    }

    cout << "The longest word is: " << longestWord << endl;
    cout << "Its length is: " << maxLength << endl;

    return 0;
}
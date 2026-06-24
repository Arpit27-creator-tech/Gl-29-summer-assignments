//programme to check if two strings are anagrams of each other

#include <iostream>

using namespace std;

bool areAnagrams( char str1[],  char str2[])
{
    int count[256] = {0}; 

    
    for (int i = 0; str1[i] != '\0'; i++)
    {
        count[(unsigned char)str1[i]]++;
    }

    
    for (int i = 0; str2[i] != '\0'; i++)
    {
        count[(unsigned char)str2[i]]--;
    }

    // Check if all counts are zero
    for (int i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    char str1[100], str2[100];

    cout << "Enter the first string: ";
    cin.getline(str1, 100);

    cout << "Enter the second string: ";
    cin.getline(str2, 100);

    if (areAnagrams(str1, str2))
    {
        cout << "The strings are anagrams of each other." << endl;
    }
    else
    {
        cout << "The strings are not anagrams of each other." << endl;
    }

    return 0;
}
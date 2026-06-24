//programme to remove duplicate characters from a string

#include <iostream>

using namespace std;

void removeDuplicates(char str[])
{
    int count[256] = {0}; 
    int j = 0; 

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (count[(unsigned char)str[i]] == 0)
        {
            str[j++] = str[i];
            count[(unsigned char)str[i]]++;
        }
    }
    str[j] = '\0'; 
}

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    removeDuplicates(str);
    cout << "String after removing duplicates: " << str << endl;

    return 0;
}
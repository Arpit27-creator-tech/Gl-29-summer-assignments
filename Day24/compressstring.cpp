//programme to compress a string

#include <iostream>

using namespace std;

void compressString(char str[])
{
    int count = 1;
    int j = 0; 

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == str[i + 1])
        {
            count++;
        }
        else
        {
            str[j++] = str[i];
            if (count > 1)
            {
                j += sprintf(&str[j], "%d", count);
            }
            count = 1; 
        }
    }
    str[j] = '\0'; 
}

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    compressString(str);
    cout << "Compressed string: " << str << endl;

    return 0;
}
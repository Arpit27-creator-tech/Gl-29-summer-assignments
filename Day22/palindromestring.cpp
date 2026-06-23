//function to find whether a string is palindrome or not

#include <iostream>

using namespace std;

bool isPalindrome(const char str[])
{
    int left = 0;
    int right = 0;

    while (str[right] != '\0')
    {
        right++;
    }
    right--; 

    while (left < right)
    {
        if (str[left] != str[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    if (isPalindrome(str))
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
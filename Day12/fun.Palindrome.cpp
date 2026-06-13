//function to check for a palindrome number

#include<iostream>

using namespace std;

void palindrome(int n)
{
    int temp=n;
    int rev=0;
    while(n!=0)
    {
        int dig=n%10;
        rev=rev*10+dig;
        n/=10;
    }

    if(rev==temp)
    {
        cout<<"Palndrome";

    }
    else
    {
        cout<<"Not palindrome";
    }
}

int main()
{
    int n;
    cout<<"Enter the number you want to check: ";
    cin>>n;
    palindrome(n);
    return 0;

}
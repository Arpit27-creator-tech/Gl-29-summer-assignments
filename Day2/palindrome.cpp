#include<iostream>
using namespace std;

void palindrome(int n)
{
    int rev=0,temp=n;;
    while(n!=0)
    {
        int dig = n%10;
        rev=rev*10+dig;
        n/=10;
    }
    cout << rev<<endl;
    if(rev==temp)
    {
        cout<<"The number is palindrome";
    }
    else
    {
        cout<<"Not a palndrome number ";
    }
}
int main()
{
    int n;
    cout << "Enter the number you want to check: ";
    cin>> n;
    palindrome(n);
    return 0;

}
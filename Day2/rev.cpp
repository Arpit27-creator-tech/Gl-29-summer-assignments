#include <iostream>
using namespace std;

void reverse_num(int n)
{
    int rev=0;
    while(n!=0)
    {
        
        int dig=n%10;
        rev=rev*10+dig;
        n=n/10;

    }
    cout<<"The reversed number is: "<< rev;
}

int main()
{
    int n;
    cout<<"Enter the numebr you want to reverse: ";
    cin >> n;
    reverse_num(n);
    return 0;
}
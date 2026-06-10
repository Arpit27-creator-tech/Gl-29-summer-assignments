/*
A
BB
CCC
DDDD
EEEEE
*/

#include<iostream>

using namespace std;

void pattern7(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            char ch='A'+i-1;
            cout<<ch<<" ";
        }
        cout <<endl;
    }   
}

int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern7(n);
    return 0;
}
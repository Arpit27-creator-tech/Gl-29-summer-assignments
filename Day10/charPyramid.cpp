/*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/

#include<iostream>

using namespace std;

void pattern12(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        
        for(int j=1;j<=2*i-1;j++)
        {
            if(j<=i)
            {
                char print='A'+j-1;
                cout<<print;
            }
            else
            {
                char print='A'+2*i-j-1;
                cout<<print;
            }
        }
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern12(n);
    return 0;
}
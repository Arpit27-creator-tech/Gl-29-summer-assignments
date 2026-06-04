#include <iostream>

using namespace std;

void prime_in_range(int n)
{
    for(int i=1;i<=n;i++)
    {
        int count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            cout<<i<<endl;;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number till you want to check: ";
    cin >> n;
    prime_in_range(n);
    return 0;
}
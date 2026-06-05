#include<iostream>
using namespace std;

void LastTerm(int n)
{
    {
        if (n == 1) {
            cout << 0;
            return;
        }
        int a = 0, b = 1;
        for (int i = 2; i <= n; i++) {
            int next = a + b;
            a = b;
            b = next;
        }
        cout << a;
    }
}

int main()
{
    int n;
    cout<<"Enter the term you want to find: ";
    cin>> n;
    LastTerm(n);
    return 0;

}
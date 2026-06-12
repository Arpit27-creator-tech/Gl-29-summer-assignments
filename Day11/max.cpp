//programe to write a funtion to find maximum of giver number 

#include<iostream>

using namespace std;

void MaxOf(int n,int m)
{
    int maximum = n>m?n:m;
    cout<<"The maximum number among both is "<< maximum;
}

int main()
{
    int n,m;
    cout<<"Enter the first number: ";
    cin>>n;
    cout<<"Enter the second number: ";
    cin>>m;
    MaxOf(n,m);
    return 0;
}
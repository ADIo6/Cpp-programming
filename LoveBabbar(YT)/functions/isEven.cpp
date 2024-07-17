#include<iostream>
using namespace std;

bool isEven(int a)
{
    if(a&1)
    {
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;

    if(isEven(n))
    {
        cout<<"the number is even"<<endl;

    }
    else
    cout<<"the number is odd"<<endl;
}
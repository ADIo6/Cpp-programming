#include<iostream>
using namespace std;

void counting(int n)
{
    for (int i=1;i<=n;i++)
    cout<<i<<" ";
    // return; 
}
int main()
{
    int n;
    cin>>n;

    counting(n);
}
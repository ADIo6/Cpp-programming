#include<iostream>
using namespace std;

int main()
{
    int a=0,b= 1,n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<a<<" "<<b<<" ";

    for (int i = 1; i <=n; i++)
    {
        int nextn=0;
        cout<<(nextn=a+b)<<" ";
        a=b;
        b=nextn;
    }
    
}
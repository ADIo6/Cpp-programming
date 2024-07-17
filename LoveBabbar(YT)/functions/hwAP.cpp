#include<iostream>
using namespace std;

int AP(int n)
{
    return (3*n)+7;

}

int main()
{
    int n;
    cout<<"Enter the n value"<<endl;
    cin>>n;

   
    cout<<"The AP="<< AP(n);
}
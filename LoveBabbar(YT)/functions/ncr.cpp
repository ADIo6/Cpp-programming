#include<iostream>
using namespace std;

int factorial(int a)
{   int fact=1;
    for(int i=1;i<=a;i++)
    fact=fact*i;
    return fact;
}

int nCr(int n,int r)
{
    int numer=factorial(n);
    int denom=factorial(r)*factorial(n-r);

    return numer/denom;
}

int main()
{   
    int n,r;
    cout<<"Enter the value of n and r"<<endl;
    cin>>n>>r;

    cout<<"nCr="<<nCr(n,r)<<endl;

}
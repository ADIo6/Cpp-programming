#include<iostream>
using namespace std;


// 1->prime number
// 0->not a prime number
bool isPrime(int a)
{
    for(int i=2;i<a;i++)
    {//divide hogaya then its not a prime no.
    if(a%i==0)
    {
        return 0;
    }
    
    }
return 1;
}

int main()
{
    int n;
    cin>>n;

    if(isPrime(n))
    {
        cout<<"its a prime number"<<endl;

    }
    else{
        cout<<"its not a prime number";
    }
}
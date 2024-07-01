#include<iostream>
using namespace std;

int main()
{
    float a,b;

    cout<<"Enter the value of a & b "<<endl;
    cin>>a>>b;

    char op;
    cout<<"enter the operation to be performed"<<endl;
    cin>>op;
    switch (op)
    {
    case '+':cout<<a+b<<endl;
        
        break;
        
        case '-':cout<<a-b<<endl;
        
        break;
        
        case '*':cout<<a*b<<endl;
        
        break;
        
        case '/':cout<<a/b<<endl;
        
        break;
    default: cout<<"Please enter a valid operation"<<endl;
        break;
    }
}
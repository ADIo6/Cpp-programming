#include<iostream>
using namespace std;

int main()
{
    int num,product=1;
    cout<<"Enter the N (number)"<<endl;
    cin>>num;
    for (int i = 0; i <num; i++)
    {
        product *= (num%10);
        num/=10;
    }
    cout<<"product = "<<product;
    
}

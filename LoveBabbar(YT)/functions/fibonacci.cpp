#include<iostream>
using namespace std;

int fib(int n)
{
    int a=0,b=1,answer;
    if(n==1)
    return a;
    // else if(n==2)
    // return a,b;
  
        for(int i=1;i<=n;i++)
        {
            answer=a+b;
             a=b;
            b=answer;
           
            
        }
          return answer;
       
}
int main()
{
    int n;
    cin>>n;

    cout<<"FIBONACCI SERIES TILL "<<n<<" th TERM    \n"<<fib(n);
}
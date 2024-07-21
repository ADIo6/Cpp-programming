#include<bits/stdc++.h>
using namespace std;

int count(int a)
{
    int c=0;
     while(a>0 && a%2==0)
        {
            a/=2;
            c++;

        }
    return c;
}
int maxExponent(int a, int b)
{   
    int max=0;
    int x=0;
    for (int i = a; i < b; i++)
    {
      if(x<count(i))
      {
        x= count(i);
        max = i;
      } 
    
    }
    return max;
    
}

int main(){
    int a,b;
    cout<<"Enter the no.s"<<endl;
    cin>>a>>b;
    int ans = maxExponent(a,b);
    cout<<ans;
    
}
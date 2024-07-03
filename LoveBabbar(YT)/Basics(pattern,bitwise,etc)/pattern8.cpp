/*
*****
 ****
  ***
   **
    *
*/
#include<iostream>
using namespace std;

int main()
{
    int i=1, n;
    cin>>n;

    while(i<=n)
    {
        int j=1;
        int space=i-1;
        while(space)
        {
            cout<<" ";
           space--; 

        }
        while(j<=n-i+1)
        {
            cout<<"*";
            j++;

        }
        cout<<endl;
        i++;

    }
}
/*
    *
   **
  ***
 ****
*****
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
        int space=n-i;//first we are making a loop for spaces where in each row space is "i" less than "n"    i.e, (n-i)
        while(space)
        {
            cout<<" ";
           space--; // --  because spaces are decreasing in each row.

        }
        while(j<=i)
        {
            cout<<"*";
            j++;

        }
        cout<<endl;
        i++;

    }
}
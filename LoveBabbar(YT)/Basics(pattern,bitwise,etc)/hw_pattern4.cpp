/*
    1
   23
  456
78910
*/
#include<iostream>
using namespace std;

int main()
{
    int n,i=1;
    cin>>n;
    int count=1;

    while (i<=n)
    {
        /* creating spaces triangle  */
        int space=n-i;
        while (space)
        {
        
            /* code */
            cout<<" ";
            space--;
        }
        int j=1;
        while (j<=i)

        {
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
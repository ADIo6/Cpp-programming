/*n=6
123456654321
12345**54321
1234****4321
123******321
12********21
1**********1
*/
#include<iostream>
using namespace std;

int main()
{
    int n,i=1;
    cin>>n;


    while (i<=n)
    {
        /* creating spaces triangle  */
        int j=1;
        while (j<=n-i+1)

        {
            cout<<j;
            j++;
        }
        int star=i-1;
        while (star)
        {
            cout<<"**";
            star--;
        }
        /*
        its one of the alrenative way by simply running the loop in reverse order i.e, from 1.\

        int k=n-i+1;
        while (k>=1)
        {
            cout<<k;
            k--;
         }*/
        int k=1;
        while (k<=n-i+1) 
        {
            cout<<n-i-k+2;// the formula is the key to print in reverse.
            k++;
         }
        cout<<endl;
        i++;
    }
}
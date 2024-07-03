/*n=6
111111
 22222
  3333
   444
    55
     6
*/

#include<iostream>
using namespace std;

int main()
{
    int n,i=1;
    cin>>n;

    while (i<=n)
    {
        /*creating spaces triangle*/
        int space=i-1;
        while (space)
        {
            cout<<" ";
            space--;
        }
        int j=1;
        while (j<=n-i+1)

        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}
/*n=4
1234
 234
  34
   4
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
        int space=i-1;
        while (space)
        {
        
            /* code */
            cout<<" ";
            space--;
        }
        int j=1;
        while (j<=n-i+1)

        {
            cout<<j+i-1;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}
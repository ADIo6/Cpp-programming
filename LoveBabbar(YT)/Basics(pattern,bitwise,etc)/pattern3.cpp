
/*n=5

ABCDE
FGHIJ
KLMNO
PQRST
UVWXY
*/

#include<iostream>
using namespace std;
int main()

{
    
    int n;
    cin>>n;
    int i=1;
    char ch='A';
   
    while(i<=n)
    
    {   
      int j=1;
        while(j<=n)
        {  
           cout<<ch;
            ch=ch+1;
            j++;

        }
        cout<<endl;
        i++;
    }
    
} // namespace std;



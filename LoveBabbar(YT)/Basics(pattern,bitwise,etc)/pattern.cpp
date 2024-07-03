/* n=5
E 
D E
C D E
B C D E
A B C D E
*/


#include<iostream>          
using namespace std;  
int main()

{
    
    int n;
    cin>>n;
    int i=1;
    

    while(i<=n)
    
    {   
      int j=1;
      char start='A'+n-i;   //this formula will result in to start with E (when n= 5)

      /*to start with, here we have derieved a _formula_ for the first character for each row and then we have increased each of them with simple 'start++'*/ 

        while(j<=i)
        {  
            
            
           cout<<start<<" ";
            start++;
            j++;

        }
        cout<<endl;
        i++;
    }
    
} // namespace std;



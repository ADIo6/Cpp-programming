/* N=5
    A 
    B C 
    D E F 
    G H I J 
    K L M N O */  

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
        while(j<=i)
        {  
            // char ch='A'+i+j-2;
            
           cout<<ch<<" ";
            ch++;
            j++;

        }
        cout<<endl;
        i++;
    }
    
} // namespace std;



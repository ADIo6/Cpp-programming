// n=5
// 1 
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1
#include<iostream>
using namespace std;
int main()

{
    // cout<<"hello world";
    int n;
    // int count=1;
    cin>>n;
    int i=1;
    while(i<=n)
    
    {
        int j=1;
        
    // int value=i;
        while(j<=i)
        {   
           cout<<i-j+1<<" "; //to print in reverse order of (i)
            // value++;
            j++;

        }
        cout<<endl;
        i++;
    }
    
} // namespace std;



// i/p = [0,1,0,1]
// o/p = 4

// i/p = [1,0,0,0,1]
// o/p = 2

#include<bits/stdc++.h>
using namespace std;


int main(){
 
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int count= 0;
    bool reverse = false;
    // for (int i = 0; i < n; i++)
    // {   
    //     if (( arr[i] == 0 && reverse == false) || arr[i]==1 && reverse == true )
    //     {
    //         count++;
    //         reverse = !reverse;
    //     }
        
    // }
    
    // Or else we can use nested loop and here we dont have to use reverse concept but the complexity will be higher...
    for(int i=0; i < n ; i++)
    {   
        if(arr[i] == 0)
        {

            for(int j = i+1 ; j < n ; j++)
            {
                arr[j]= !arr[j];
            }
            count++;
            arr[i]= 1;
        }
    }
    
    cout<<count<<endl;
    


}
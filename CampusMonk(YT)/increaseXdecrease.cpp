// enter the value of n
// 8
// Enter the number in array
// 1 1 2 2 3 3 4 5 
// True


#include<iostream>
#include<map>

using namespace std;

int main(){

    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int arr[n];
    int mx= 0;

    map<int, int> count;
    cout<<"Enter the number in array"<<endl;
    for (int i = 0; i < n; i++)
    {   
        
        cin>>arr[i];
        count[arr[i]]++;
        mx = max(arr[i],mx);

    }
    
    for (auto it: count)
    {
        if((it.first == mx && it.second > 1) || it.second > 2)
        {
            cout<<"False";
            return 0;
        }
        
    }
    cout<<"True";
    



}
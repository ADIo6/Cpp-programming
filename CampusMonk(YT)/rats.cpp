/*
write a function that accepts three parameters : 2 positive integers r and unit and a positive interger array arr of size n.
r= no. of rats present in an area
unit = amount of food each rat consumes

each element in an array arr reprensents the amount of food present in each house, where the index of the array corresponds to the house number.

The function should determine the minimum number of houses required to provide enough food for all the rats.

*/



#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int r,unit;
    cout<<"Enter the r and unit values"<<endl;
    cin>>r>>unit;
    cout<<"Enter the array size"<<endl;
    cin>>n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int total = r*unit;
    sort(arr.begin(), arr.end());

    int count=0;
    for (int i = n-1; i >=0; i--)
    {
        total-= arr[i];
        count++;
        if(total<=0)
        {
            
            break;
        }

    }
    cout<<count;
    

}
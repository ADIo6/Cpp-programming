/*
i/p: n =9, m=4
arr1= [9,1,10,1,2,5,99,1,3]
arr2= [2,1,9,5]
o/p :
arr1: [2,1,1,1,9,5,3,10,99]
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    vector<int> arr1(n), arr2(m);
    map<int,int> freq;

    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
        freq[arr1[i]]++;
    }
    int j =0;
    for (int i = 0; i < m; i++)
    {
        cin>>arr2[i];
        while(freq[arr2[i]]>0)
        {
            arr1[j]=arr2[i];
            freq[arr2[i]]--;
            j++;

        }
    }

    for(auto &it: freq)
    {
        while (it.second > 0)
        {
            arr1[j]= it.first;
            j++;
            it.second--;

        }
        
    }
    for(auto it:arr1)
    {
        cout<<it<<" ";
        
    }
}
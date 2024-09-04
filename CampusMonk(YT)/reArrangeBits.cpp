/*
Alex gives you a positive Number N and wants you to rearrange the bits of the number in its binary representation such that all set bits are in consecutive order.

YOur task is to find and return an integer value representing the minimum possible number that can be formed after re-arranging the bits of the number N.

ex-
i/p  = 10
o/p = 3

*/


// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count =0;
    cin>>n;
//finding set bits
    while (n!=0)
    {
        if(n%2!=0){
            count++;

        }
        n = n>>1;
    }
    
    int ans= 0;
    while (count > 0)
    {
        ans+= (1 << (count-1));
        count--;
    }
    cout<<ans<<endl;
    
}
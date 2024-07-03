// permutation = (no. of characters)!/ (no. of repeating characters)!

#include<iostream>
#include<map>
using namespace std;

int fact(int n)
{
    if(n==0||n==1)
    {
        return 1;

    }
    return n*fact(n-1);//recursion method
    }

int main(){
    string s;
    cout<<"enter string"<<endl;
    cin>>s;
    //map <data_type of key, data_type of value> name of map;
    map<char, int>count;
    for(int i= 0; i<s.length();i++)
    {
        count[s[i]]++;
    }
    int ans = fact(s.length());

    // iterate in map
    // for(data_type variable_name: map_name )
    for(auto it: count )
    {
        ans = ans/fact(it.second);
    }
    cout<<ans<<endl;
 }


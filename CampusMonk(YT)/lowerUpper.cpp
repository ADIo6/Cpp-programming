// Given a string ,convert it into alternate lower case and upper case letters.
// first char should be lower then upper and so on...
// Note : string will only consist of lowercase and uppercase english alphabets

// eg: 
//input: AdilAHmed
//output: aDiLaHmEd


// #include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    string s;
    cout<<"Enter the String:"<<endl;
    cin>>s;
    
    for (int i = 0; i < s.length(); i++)
    {
        if(i%2==0) //even    
        {
            s[i]= tolower(s[i]);
        }
        else 
            s[i] = toupper(s[i]);

    }
    cout<<s;

}


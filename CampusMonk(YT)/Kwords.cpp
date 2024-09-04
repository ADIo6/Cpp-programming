/*
Print first k words in a string 
ex- 
i/p = "Hello Students of xyz college"
k=3
o/p = "Hello Students of "
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int k;
    cin>>k;
    for(char ch: s){
        if(ch == ' '){
            k--;
            if(k== 0)
            break;
        }
        cout<<ch;
    }
}
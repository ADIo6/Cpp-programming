#include<bits/stdc++.h>
#include<string>

using namespace std;

void ReplaceChar(string str,int n, char ch1,char ch2 )
{
    

            if( ch1==ch2)
            {
                
                cout<<"string unchanged"<<endl;
            }
    for(int i = 0; i<n;i++)
    {
         if(str==""){
            cout<<"Null String";
        }
        else{
        if (str[i]==ch1)
            {
                str[i]=ch2;
            }
        else if(str[i]== ch2)
            {
               str[i]=ch1;
            }
        }
        }
        for(int i= 0;i<n;i++)
        {
            cout<<str[i];
        }
         
        
    }

    
    

int main(){
    string s;
    char ch1,ch2;
    int n;
    cout<<"Enter the length of the String"<<endl;
    cin>>n;
    cout<<"Enter the string"<<endl;
    cin>>s;
    cout<<"Enter characters for replacements \n char1 & char2: ";
    cin>>ch1>>ch2;

    ReplaceChar(s,n,ch1,ch2);

}

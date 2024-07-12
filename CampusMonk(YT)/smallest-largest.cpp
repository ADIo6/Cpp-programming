/*
Print an integer representing the concatenation of four digits where 1st digit represents the smallest digit in the thousands place of all three numbers(a,b,c).second digit represents the largest digit in the hundreds place of all 3 no.s, third digits represents the smallest digit in the tens place of all three no.s and fourth digit represents the largest digit in the units place of all 3 no.s 

eg:-

i/p 3521 2452 1352
o/p 1522
*/

#include<iostream>
#include <algorithm>
#include<cmath>

using namespace std;

int reverse(int ans){
    int rev=0,rem=0;
    for (int i = 0; i < 4; i++)
    {
        rem= ans%10;
        ans/= 10;
        rev= rev*10+rem;

    }
    return rev;
    
}

int main()
{
    int a,b,c;
    cout<<"Enter the 3 no.s of 4 digits"<<endl;
    cin>>a>>b>>c;
    int ans = 0;

    for (int i = 0; i < 4; i++)
    {
        if(i%2==0){
            // using 'ans=ans*10 + max-dig ' we will have to reverse the ans to get the right order. 
        // ans= ans*10+max({a%10,b%10,c%10});

        ans += pow(10,i) * max({a%10,b%10,c%10});

        }
        else{
        // ans= ans*10+min({a%10,b%10,c%10});


        ans += pow(10,i) * min({a%10,b%10,c%10});

        }
        a/=10;
        b/=10;
        c/=10;
       
    }
    
    cout<<ans<<endl;
    // cout<< reverse(ans);

}
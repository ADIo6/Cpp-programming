/*At "YoursPay" bank, the customer bank lockers use a digital lock. The digital lock is encoded in numeric form. To decode the lock there are two methods. If the lock is encoded by an Armstrong number, then the decoding number is the sum of the even digits of the encoded number. If the encoded number is not an Armstrong number, then the decoding number is the sum of the odd digits of the encoded number, An Armstrong number is a number that is the sum of its own digits each raised to the power of the number of digits in the number.)

Write an algorithm to decode the digital lock

Input

The Input is a long integer - encodedLock representing the numeric value of the encoded digital lock

Output

Print an integer representing the decoding number for the encoding digital Io*/

#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
long long power(long long a,long long n)
{   
    long long ans = 1;

    for(int i=0;i<n;i++){
        ans*=a;
    }
    return ans;
}
bool iSarmStrong(long long n)
{   
    long long count=0;
    long long originalNo=n;
    long long num=n;
    long long temp= num;
    //no. of digits
    while (temp!=0)
    {
        temp/=10;
        count++;
    }
    num=n;
    long long sod=0;
    while (num!=0)
    {
        sod+=power(num%10,count);
        num/=10;
    }
    
    if(sod== n){
        return true;

    }
    
    return false;
}
int main()
{
    long long n;
    cout<<"Enter to check arm strong number"<<endl;
    cin>>n;

    int ans=0;
    if(iSarmStrong){
        while(n!=0)
        {   int lastDig=(n%10);
            if(lastDig%2==0)
            {
                ans+= lastDig;
            }
                n/=10;
        }
    }
    else
    {
            while (n!=0)
            {   int lastDig=(n%10);
                if(lastDig%2!=0)
                {
                    ans+= lastDig;
                }
                n/10;
            }
                
     }
    cout<<ans<<endl;
}
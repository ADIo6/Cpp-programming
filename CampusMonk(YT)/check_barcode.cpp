#include<iostream>
#include<climits>
using namespace std;
//finging the max digit of a number
int find_max_digit(int num){
    
    int max=INT_MIN,m;

    while(num>0)
    {

    m=num%10;
    num=num/10;
    if(m>max)
    {   
        max=m;
    }
    }
    return max;
}
// int main()
// {   
//     int num;
//     cout<<"enter a number"<<endl;
//     cin>>num;
//     cout<<find_max_digit(num);

// }

int main()
{
    string s;
    int price=0;
    cout<<"Enter the Barcode : ";
    cin>>s;

    for(int i = 0; i<s.length();i++)
    {

        if(isdigit(s[i]))
        {
            price += (s[i]-48);
        }
        else{
            price += (find_max_digit(int(s[i])));
        }
    } 
    cout<<"The Price is : "<<price;
}

// int main()
// {
//     string B,result;
//     cout<<"Enter the Barcode"<<endl;
//     cin>>B;

    

//     for (int i = 0; i < B.length() ; i++)
//     {
//         if(B[i]>='0' && B[i]<='9' )
//         {   
//             int d1,d2;
//             d1=B[i]%10;
//             result+=d1;
//             B[i]=B[i]/10;
            

//         }
//         else if((B[i]>=65 && B[i]<=90) || (B[i]>=97 && B[i]<=122) )
//         {
//             int largest,d1,d2; 
//             d1=B[i]%10;
//             d2=B[i]/10;
//             if(d1>d2)
//             result = B[i]+d1;
//             else
//             result= B[i]+d2;
//         }
//     }
//     cout<<"The result ="<<result<<endl;

// }
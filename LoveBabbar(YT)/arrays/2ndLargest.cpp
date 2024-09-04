#include<iostream>
using namespace std;

int main()
{
    int arr[5]={3,5,1,532,32};
    int max=0;
    sort(arr);
    cout<<arr[];
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]>max)
        {
            max= arr[i];
        }
    }
    cout<<max<<" is the maximum of array";
}
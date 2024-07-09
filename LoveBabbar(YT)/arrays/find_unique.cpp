#include<iostream>
using namespace std;

int Unique(int arr[],int size)
{
    int ans=0;

    for (int i = 0; i < size; i++)

    {
        ans=ans^arr[i];

    }
    return ans;
}

void printArray(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[10]={2,3,9,6,3,6,2};
    // for (int i = 0; i < 10; i++)
    // {
      
    // cin>>arr[i];
    // }
    

    cout<<Unique(arr,7);
   // printArray(arr,6);

}
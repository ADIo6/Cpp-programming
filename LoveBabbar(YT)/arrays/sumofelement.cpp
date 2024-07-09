#include<iostream>
using namespace std;

int sumOf(int arr[],int size)
{   
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
    }
    return sum;
}
printArray(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[100];
    int n;
    cout<<"Enter the size of arrays"<<endl;
    cin>>n;
    cout<<"Enter the "<<n<<" arrays"<<endl;
    for (int i = 0; i < n; i++)
    cin>>arr[i];

    cout<<sumOf(arr,n);
    
    // printArray(arr,5);
}
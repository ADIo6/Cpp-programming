#include<iostream>
using namespace std;

void Swap(int arr[],int size)
{   int temp;
    for (int i = 0; i < size; i++)
    {
     temp=arr[i+1];
     arr[i+1]=arr[i];
     arr[i]=temp;

    }
    
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
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    Swap(arr,10);
    printArray(arr,10);
}
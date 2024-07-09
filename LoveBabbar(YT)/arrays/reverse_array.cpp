#include<iostream>
using namespace std;
//swapping start and end with themselves to get the reverse of the array

void reverse(int arr[],int size)
{   
    int start=0;
    int end=size-1;

    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
//printing arrays
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
    int arr[6]={1,2,3,4,5,6};
    int brr[5]={-1,2,13,21,6};

    reverse(arr,6);
    reverse(brr,5);

    printArray(arr,6);
    printArray(brr,5);

}
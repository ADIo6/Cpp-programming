#include<iostream>
using namespace std;

void swapAlternate(int arr[],int size)
{
    for (int i = 0; i < size; i+=2)
    {  
         if (i+1<size)//this condition is to check wether the next no. is inside the array or not
        {
        swap(arr[i],arr[i+1]);
        }
    
        
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
    int arr[9]={2,1,4,3,6,5,7,8,9};
    int arr1[10]={2,1,4,3,6,5,7,8,9,10};
     swapAlternate(arr,9);
     swapAlternate(arr1,10);
     printArray(arr, 9);
     printArray(arr1, 10);

}
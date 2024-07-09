#include<iostream>
using namespace std;


void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//using two pointer approach
void sortOne(int arr[],int size)
{
    int left=0,right=size-1,mid=size/2;
    int step=0;

    
    while (left<right)
    {   

        cout<<"step"<<step++<<endl;
        printArray(arr,size);
        
        while (arr[left]==0 && left<right)
        {
            left++;
        }

        while (arr[right]==2 && left<right)
        {
            right--;
        }
        
        swap(arr[left],arr[right]);
        if(arr[left]==1)
        {
            right--;
        }
        else
        {
            left++;
            right--;
        }
    //     if (arr[mid]==0)
    //     {
    //         swap(arr[mid],arr[left]);
    //     }
    //     if (arr[mid]==2)
    //     {
    //         swap(arr[mid],arr[right]);
    //     }
     }
    
}


int main()
{
    int arr[9]={0,2,2,1,0,1,1,0,2};

    sortOne(arr,9);
    printArray(arr,9);
}
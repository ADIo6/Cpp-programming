#include<iostream>
using namespace std;


int allDup(int arr[],int size)
{
    int ans;
    for (int i = 0; i < size; i++)
    {
        for (int  j =i+1; j < size; j++)
        {
            if(arr[j] == arr[i])
           {
                ans = ans + arr[i];
                
           } 
        }
        
    }
            return ans;
}
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[8]={4,3,2,7,8,2,3,1};
    int brr[3]= {1,1,2};

    allDup(arr,8);
    allDup(brr,3);

    printArray(arr,8);
    printArray(brr,3);


    // printArray(arr,8);
}
#include<iostream>
using namespace std;

void largest(int arr[],int size)
{   
    int max = 0;
    for (int i = 0; i <= size; i++)
    {
        if (arr[i]>max)   
        {
            max= arr[i];
        }
    }
    
    cout<<"Largest = "<<max<<endl;
}

// void printArray(int arr[],int size)
// {
//     for (int i = 0; i <=size; i++)
//     {
//         cout<<arr[i]<<" ";

//     }
//         cout<<endl;
// }
int main()
{
    int arr2[5] = {3,1,4,5,2};
    int arr[6] = {1,2,3,4,5,6};

    // printArray(arr2,5);
    largest(arr2,5);
    largest(arr,6);
    
}
#include<iostream>
using namespace std;

int firstO(int arr[],int size,int key)
{
    int start=0,end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while (start<end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }

        else if(arr[mid]<key)   //right mai jao
        {
            start=mid+1;

        }
        else                    //left mai jao
        {      
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    
    return ans;
}

int lastOcc(int arr[],int size,int key)
{
    int start=0,end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while (start<end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }

        else if(arr[mid]<key)   //right mai jao
        {
            start=mid+1;

        }
        else                    //left mai jao
        {      
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    
    return ans;
}

int main()
{
    int arr[100]={1,2,3,3,3,3,3,3,5};

    cout<<" First occurence of 3 is at index "<<firstO(arr,10,3)<<endl;
    cout<<" Last occurence of 3 is at index "<<lastOcc(arr,10,3);
   return 0;
}
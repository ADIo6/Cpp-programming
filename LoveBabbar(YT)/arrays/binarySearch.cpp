#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key)
{
    int start=0,end=size-1;
    int mid=start+(end-start)/2;

    while (start<=end)
    {
        if(key==arr[mid])
        {
            return mid;
        }
        if (key<arr[mid])
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{
    int odd[7]={1,2,3,4,5,6,23};
    int even[6]={1,2,3,4,5,62};

    int index= binarySearch(even,6,20);
    int indexo= binarySearch(odd,7,2);

    cout<<"Index of 20 is "<<index<<endl;
    cout<<"Index of 2 is "<<indexo<<endl;

}
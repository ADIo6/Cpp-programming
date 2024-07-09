#include<iostream>
using namespace std;

bool search(int arr[],int size,int key)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==key)
        return 1;
    }
    return 0;
}

int main()
{
    int arr[10]={5,-2,7,10,1,8,22,3,-7,22};
    
    int key;
    cin>>key;
    
    bool found=search(arr,10,key);
    if(found)
    {
        cout<<"Found the item"<<endl;
    }
    else
    cout<<"Not Found the item"<<endl;
}
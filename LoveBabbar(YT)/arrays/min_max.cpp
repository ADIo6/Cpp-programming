#include<iostream>
#include<climits>
using namespace std;

int getMin(int n[],int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if(n[i]<min)
        min=n[i];
    }
    return min;
}


int getMax(int n[],int size)
{
    int max=INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(n[i]>max)
        max=n[i];
    }
    return max;
}

int main()
{
    int size;
    cin>>size;
    int num[100];

// taking input in array
    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }

    cout<<"maximum is "<<getMax(num,size)<<endl;
    cout<<"minimum is "<<getMin(num,size);
}
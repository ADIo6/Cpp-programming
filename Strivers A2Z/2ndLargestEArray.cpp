#include<iostream>
using namespace std;
//Time complexity = O(2N)

/*
int main(){
    int arr[10]={1,5,3,5,2,7,8,9,4,3};
    int max=0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]>max) 
        {
           max=arr[i];
        }

    }
    int secondMax = -1;
    for (int i = 0; i < 10; i++)
    {
        if(arr[i] != max  &&  arr[i]>secondMax){
            secondMax = arr[i];
        }
    }
    cout<<"Second Largest element is : "<<secondMax;
    
    
} */

int main(){
    int arr[10] = {9,5,3,5,2,7,8,9,4,8};

    int max= arr[0], secondMax = -1;

    for (int i = 1; i < 10; i++)
    {
        if (arr[i]>max)
        {
            secondMax = max;
            max = arr[i];
        }
        else if(arr[i]<max && arr[i] > secondMax)
        {
            secondMax = arr[i];
        }
    }
    cout<<"Largest "<<max<<"\n\nSecond Largest :"<<secondMax;
}
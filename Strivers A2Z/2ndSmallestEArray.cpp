#include<iostream>
using namespace std;

int main(){
    int arr[10] = {9,5,3,5,2,7,8,9,4,8};

    int min  = arr[0], secMin = INT16_MAX;
    for (int i = 1; i < 10; i++)
    {
        if (arr[i]<min )
        {
            secMin = min;
            min = arr[i]  ;

        }
        else if(arr[i] > min && arr[i] < secMin)
        {
            secMin = arr[i];
        }
        
    }
    cout<<"MIN  = "<<min<<"\n\nSecond MIN = "<<secMin<<endl;
    cout<<"";
    

}
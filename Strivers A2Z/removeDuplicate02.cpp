// two pointer approach (optimal solution)

#include<iostream>
using namespace std;

int removeDup(int arr[],int length){

    int i = 0;
        for (int j = i+1; j < length; j++)
        {
            if(arr[j] != arr[i]){
                arr[i+1] = arr[j];
                i++;
            }
        }
    return i+1;


}
void printArray(int arr[],int len)
{
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[8] = {1, 1, 2, 2, 4, 5, 5, 7};
    int arr2[6] = {1, 1, 2, 2, 3, 3};


    int newLength1 = removeDup(arr, 8);
    int newLength2 = removeDup(arr2, 6);
    cout<<"The new length of array after removal of duplicates = "<<newLength1<<endl;
    
    printArray(arr,newLength1);
    cout<<"The new length of array 2 after removal of duplicates = "<<newLength2<<endl;
    printArray(arr2,newLength2);

    
}
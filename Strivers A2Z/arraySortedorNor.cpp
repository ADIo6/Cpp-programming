#include<iostream>
using namespace std;
bool sortedOrNot(int arr[],int length ){

     for (int i = 0; i < length-1; i++)
    
    {
        if(arr[i]> arr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int arr[10] = {1,4,2,3,6,5,8,7,9,10};
    int arr1[5] = {1,2,3,4,5};

   cout<<boolalpha<<sortedOrNot(arr,10)<<endl;
   cout<<boolalpha<<sortedOrNot(arr1, 5);

   
    
}
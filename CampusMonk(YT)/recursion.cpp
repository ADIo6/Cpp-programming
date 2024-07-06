
// no. of ways to traverse to a destination in a matrix (n * n) from * to #
// NOTE** the traversal should only be done with right and down direction i.e. no diagonal direction or route should be taken

/*

|(0,0)*   |(0,1)   |(0,2)   |
|(1,0)    |(1,1)   |(1,2)   |
|(2,0)    |(2,1)   |(2,2)#  |


 */
#include<iostream>
using namespace std;

int paths(int n, int i,int j){

    if(i<0||j<0||i>=n||j>=n){

    return 0;//out of matrix
    }
    else if(i==n-1 && j==n-1)
    {

    return 1;// reached our destination
    }
    int ways=0;
    
    ways += paths(n,i+1,j);// going down
    ways += paths(n,i,j+1);// going right
    return ways;


}

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
     cin>>n;
     cout<<paths(n,0,0);
}
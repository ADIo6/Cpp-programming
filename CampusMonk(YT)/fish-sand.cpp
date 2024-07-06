
/*Jack always visits a pond which is N * M units in dimensions. Every morning there is a fish (shown as * in the below image) which stays on the left corner of the other side, comes to right corner of the opposite side where jack feeds him some food.

The fish can move only in "forward" and "right" direction, just 1 unit. MPUS

One day Jack observed that right part of other side of pond is filled with sand. The filled part is in rectangular shape A*B(A<N and B<M). Now you have to find out in how many ways fish can reach to jack.

One of the way is shown below, in the above case Pond is 2*3 and the sand is 1*1

Input given by the user N,M,A,B
Output:  No. of different ways in which the fish can reach Jack 

eg 1:   input 2 2 1 1 -> Input integer, N,M,A,B.
        output : 5

        explaination

        way 1           way 2

        _               _
        |_               |
          |              |_   
*/


#include<iostream>
#include<vector>
using namespace std;


int paths(int i,int j, vector<vector<bool>> &mat)
{
    if (i ==mat.size()-1 && j == mat[0].size()-1)  return 1;
    if( i>=mat.size()||j>= mat[0].size()|| mat[i][j]==1 ) return 0;

    int down = paths(i+1,j, mat);
    int right = paths(i, j+1, mat);
    return down+right;
}

int main()
{
    int n,m,a,b;
    cout<<"Enter the value of n,m,a,b"<<endl;
    cin>>n>>m>>a>>b;
    
    // since we need to adjust with the question which states that the fish moves in the border but in matrix its not possible to access border so we increase the matrix by 1 so that the traversal remains the same.
    n++;
    m++;

    vector<vector<bool>>mat(n, vector<bool>(m,false));

    for(int i = 0; i < a; i++)
    {
        for(int j = m-1;j > m-1-b; j--)
        {
            mat[i][j]= 1;

        }
    }
    cout<<paths(0,0,mat);

}
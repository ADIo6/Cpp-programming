/*

Input:  
h = 12:00
m = 30.00
Output: 
165 degree

    We need to find angle between hands of an analog clock at a given time.
    Calculate the angle made by minute hand with respect to 12:00 in h hours and m minutes
*/

#include<iostream>
using namespace std;

double angle(double h, double m)
{   
    double diff=0;
    
    if(h==12){
        h=0;
    }
    h= (h/60)*0.5;
    m = (m*0.5);
    diff = h+m;
    
       
    return diff;
}

int main(){
    double hour,min;
    cout<<"Enter the time in 12 hour format HH:MM"<<endl;
    cout<<"Enter the hour : ";
    cin>>hour;
    cout<<"Enter the minutes : ";
    cin>>min;

    cout<<angle(hour,min)<<" degree";


}
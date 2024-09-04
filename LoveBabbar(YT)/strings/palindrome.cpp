// #include<iostream>
// using namespace std;

// bool isPalin(string str,int len){
//     string dup;
// for (int i = len-1 ; i >=0; i--)
//     {
//         dup+=str[i];
//     }
//     if(str==dup)
//     {

//     cout<< dup;
//     return true;
//     }
//     // 
//     // else
//     return false;
// }

// int main(){
//     string str;
//     cout<<"Enter the string"<<endl;
//     cin>>str;
//     int len = str.length();
//     isPalin(str,len);

    
    
// }
#include <iostream>
using namespace std;

// Function to check if the string is a palindrome
bool isPalin(string str, int len) {
    string dup;
    // Reverse the string
    for (int i = len - 1; i >= 0; i--) {
        dup += str[i];
    }
    // Check if the reversed string is the same as the original
    if (str == dup) {
        cout << dup << " is a palindrome." << endl;
        return true;
    } else {
        cout << dup << " is not a palindrome." << endl;
        return false;
    }
}

int main() {
    string str;
    bool result;
    cout << "Enter the string: ";
    cin >> str;
    int len = str.length();
    result =isPalin(str, len); // Call the palindrome checking function
    cout<<boolalpha<<"Result = "<<result<<endl;
    // return 0;
}

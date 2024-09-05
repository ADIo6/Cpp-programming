#include <iostream>
#include <set>  // Include the set header to use std::set
using namespace std;

int removeDuplicates(int arr[], int length) {
    set<int> st;  // Declare a set to store unique elements
    int index = 0;

    // Insert all elements of the array into the set
    for (int i = 0; i < length; i++) {
        st.insert(arr[i]);
    }

    // Move the unique elements from the set back into the array
    for (auto it : st) {
        arr[index] = it;
        index++;
    }

    // Return the count of unique elements
    return index;
}

int main() {
    int arr[8] = {1, 1, 2, 2, 4, 5, 5, 7};
    int arr2[6] = {1, 1, 2, 2, 3, 3};

    int newLength = removeDuplicates(arr, 8);
    cout << "New length after removing duplicates: " << newLength << endl;

    // Print the modified array
    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int newLength2 = removeDuplicates(arr2, 6);
    cout << "New length after removing duplicates: " << newLength2 << endl;

    // Print the modified array
    for (int i = 0; i < newLength2; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}

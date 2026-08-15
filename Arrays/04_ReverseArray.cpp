/*
Problem : Reverse Array
Platform: None
Difficulty: Easy

Approach:
- Traversing

Topic:
- Array, Reverse

Time Complexity : O(n)
Space Complexity : O(1)
*/

#include <iostream>
using namespace std;

class Solution{
public:
    void reverseArray(int arr[], int n){
        for(int i = 0; i < n/2; i++){
            int temp;
            temp = arr[i];
            arr[i] = arr[n - i - 1];
            arr[n - i - 1] = temp; 
        }
    }
};

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of Arrays: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Array before reversing: " << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    Solution obj;
    obj.reverseArray(arr, n);

    cout << "Array after reversing: " << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
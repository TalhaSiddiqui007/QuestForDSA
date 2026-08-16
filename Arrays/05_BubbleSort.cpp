/*
Problem : Bubble Sort
Platform: None
Difficulty: Easy

Approach:
- travering

Topic:
- Array, Sort

Time Complexity : O(n^2)
Space Complexity : O(1)
*/

#include <iostream>
using namespace std;

class Solution {
public:
    void bubbleSort(int arr[], int n){
        for(int i = 0; i < n - 1; i++){
            for(int j = 0 ; j < n - i - 1; j++){
                if(arr[j] > arr[j + 1]){
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
};

int main(){
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of Array: ";
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    Solution obj;
    obj.bubbleSort(arr, n);
    
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}
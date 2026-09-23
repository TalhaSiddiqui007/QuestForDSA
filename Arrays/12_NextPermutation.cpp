/*
Problem : Next Permutation
Platform: LeetCode
Difficulty: Medium

Approach:
- Two Pointer

Topic:
- Arrays

Time Complexity : O(n)
Space Complexity : O(1)
*/

#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int pivot, int n){
    int i = pivot + 1;
    int j = n - 1;
    while(i <= j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

class Solution{
public:
    void nextPermutation(int arr[], int n){
        int pivot = -1;
        for(int i = n - 2; i >= 0; i--){
            if(arr[i] < arr[i + 1]){
                pivot = i;
                break;
            }
        }
        if(pivot == -1){
            reverseArray(arr, pivot, n);
            return;
        }

        for(int i = n - 1; i > pivot; i--){
            if(arr[i] > arr[pivot]){
                swap(arr[i], arr[pivot]);
                break;
            }
        }

        reverseArray(arr, pivot, n);
    }
};

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    Solution obj;
    
    obj.nextPermutation(arr, n);

    cout << "The next permutation is: ";
    for(int val : arr){
        cout << val << " ";
    }
}
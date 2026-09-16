/*
Problem : Sort colors
Platform: LeetCode
Difficulty: Medium

Approach:
- pointers, partition 

Topic:
- Array, Sorting

Time Complexity : O(n)
Space Complexity : O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void sortColors(int arr[], int n) {
        int low = 0;
        int mid = 0;
        int high = n - 1;

        while(mid <= high){
            if(arr[mid] == 0){
                swap(arr[low], arr[mid]);
                low++;
                mid++;
            }
            else if(arr[mid] == 1){
                mid++;
            }
            else{
                swap(arr[high], arr[mid]);
                high--;
            }
        }
    }
};

int main(){
    int arr[] = {1,2,2,1,0,2,0,0,1,1,0,2};
    // [0,0,0,0,1,1,1,1,2,2,2,2]
    int n = 12;

    Solution obj;
    obj.sortColors(arr, n);
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
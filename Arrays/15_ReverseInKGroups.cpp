/*
Problem : Reverse in K group
Platform: GeeksforGeeks
Difficulty: Basic

Approach:
- Iterators

Topic:
- Arrays, reversing

Time Complexity : O(n)
Space Complexity : O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseInGroup(vector<int>& arr, int k){
        int n = arr.size();
        if(k > n){
            reverse(arr.begin(), arr.end());
        }
        else{
            int pos = 0;
            while(pos < n){
                reverse(arr.begin() + pos, 
                        arr.begin() + min(pos + k , n));
                pos += k;
            }
        }
    }
};

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int k = 3;
        
    reverseInGroup(arr, k);

    for(int val : arr){
        cout << val << " ";
    }
}


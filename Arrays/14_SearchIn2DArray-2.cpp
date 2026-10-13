/*
Problem : Search in 2D array - 2
Platform: LeetCode
Difficulty: Medium

Approach:
- Binary Search

Topic:
- Arrays, 2D array

Time Complexity : O(log(m * n))
Space Complexity : O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool searchMatrix(vector<vector<int>>& mat, int target) { //O(logm)
        int m = mat.size(), n = mat[0].size();

        int r = 0, c = n - 1;

        while(c >= 0 && r < m){
            if(target == mat[r][c]){
                return true;
            }
            else if(target < mat[r][c]){
                c--;
            }
            else if(target > mat[r][c]){
                r++;
            }
        }

        return false;
    }
};

int main(){
    vector<vector<int>> arr = {{1,4,7,11,15},
                               {2,5,8,12,19},
                               {3,6,9,16,22},
                               {10,13,14,17,24},
                               {18,21,23,26,30}};
    
    Solution obj;
    cout << obj.searchMatrix(arr, 5);
}


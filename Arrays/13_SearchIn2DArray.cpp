/*
Problem : Search in 2D array
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
    bool searchInRow(vector<vector<int>>& matrix, int target, int row){ // O(logn)
        int n = matrix[0].size();
        int st = 0, end = n - 1;
        while(st <= end){
            int mid = st + (end - st) / 2;

            if(target == matrix[row][mid]){
                return true;
            }else if(target > matrix[row][mid]){
                st = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        return false;
    }


    bool searchMatrix(vector<vector<int>>& matrix, int target) { //O(logm)
        // binary search on total rows
        int m = matrix.size(), n = matrix[0].size();

        int startRow = 0, endRow = m - 1;
        
        while(startRow <= endRow){
            int midRow = startRow + (endRow - startRow) / 2;

            if( target >= matrix[midRow][0] && target <= matrix[midRow][n - 1]){
                // found the row -> apply BS on this row
                return searchInRow(matrix, target, midRow);

            }else if(target >= matrix[midRow][n - 1]){
                startRow = midRow + 1;
            }else{
                endRow = midRow - 1;
            }
        }
        return false;
    }
};

int main(){
    vector<vector<int>> arr = {{1,2,3},
                               {4,5,6},
                               {7,8,9}};
    
    Solution obj;
    cout << obj.searchMatrix(arr, 8);
}


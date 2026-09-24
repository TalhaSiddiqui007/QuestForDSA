/*
Problem : Reverse a string
Platform: Leetcode
Difficulty: Easy

Approach:
-  two pointer

Topic:
- string

Time Complexity : O(n x m)
Space Complexity : O(m) 
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void reverseString(string &str){
        int st = 0;
        int end = str.length() - 1;

        while(st <= end){
            int temp = str[st];
            str[st] = str[end];
            str[end] = temp;
            st++;
            end--;
        }
    }
};

int main(){
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    Solution obj;
    obj.reverseString(str);

    cout << str;
}
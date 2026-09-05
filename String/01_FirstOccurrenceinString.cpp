/*
Problem : Find the Index of the First Occurrence in a String
Platform: Leetcode(Ques- 28)
Difficulty: Easy

Approach:
-  two pointer, Z Algorithm

Topic:
- string, string matching

Time Complexity : O(n x m)
Space Complexity : O(m) 
*/


#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int strStr(string str, string needle){
        if(str.length() < needle.length()) return -1;

        int isFound = -1;

        for(int i = 0; i <= str.length() - needle.length(); i++){
            if(str.substr(i, needle.length()) == needle){
                isFound = i;
                break;
            }
        }
        return isFound;
    }
};

int main(){
    string str = "sadbutsad";
    string needle = "sad";

    Solution obj;
    int result = obj.strStr(str, needle);
    cout << result;
}
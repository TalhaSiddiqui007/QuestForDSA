/*
Problem : Remove Occurences
Platform: Leetcode
Difficulty: Medium

Approach:
-  sub-string, erase

Topic:
- string, sub-string

Time Complexity : O(n^2 x m)
Space Complexity : O(1) 
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    string removeOccurences(string& str, string part){
        while(str.length() > 0 && str.find(part) < str.length()){
            str.erase(str.find(part), part.length());
        }
        return str;
    }
};

int main(){
    string str = "daabcbaabcbc";
    string part = "abc";
    
    Solution obj;
    obj.removeOccurences(str, part);

    cout << str;
}
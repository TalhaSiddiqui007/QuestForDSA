/*
Problem : Longest Word
Platform: GeeksForGeeks
Difficulty: Easy

Approach:
-  string

Topic:
- string

Time Complexity : O(n)
Space Complexity : O(1) 
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    string longestWord(vector<string>& s){
        string ans = "";

        for(int i = 0; i < s.size(); i++){
        
            if(ans.size() < s[i].size()){
                ans = s[i];
            }
        }
        return ans;
    }
};

int main(){
    vector<string> str = {"hi", "hello", "hey", "Konichiwa"};
    // longest is konichiwa
    Solution obj;
    cout << obj.longestWord(str);

}
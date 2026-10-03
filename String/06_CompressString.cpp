/*
Problem : Compress String
Platform: Leetcode
Difficulty: Medium

Approach:
-  string, two pointer

Topic:
- string, compressing

Time Complexity : O(n)
Space Complexity : O(log n) 
*/

#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int compress(vector<char>& chars){ //O(n)
        int n = chars.size();
        int idx = 0;

        for(int i = 0; i < n; i++){

            char ch = chars[i];
            int count = 0;

            while(i < n && chars[i] == ch){
                count++;
                i++;
            }

            if(count == 1){
                chars[idx++] = ch;
            }else{
                chars[idx++] = ch;
                string str = to_string(count);

                for(char dig : str){
                    chars[idx++] = dig;
                }
            }
            i--;
        }
        chars.resize(idx);
        return chars.size();
    }
};
int main(){
    vector<char> chars = {'a','a','a','b','b','c','c','c'};

    Solution obj;
    obj.compress(chars);

    for(char val : chars){
        cout << val;
    }
}
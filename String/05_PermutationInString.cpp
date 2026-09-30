/*
Problem : Permutation in string 
Platform: Leetcode
Difficulty: Medium

Approach:
-  Sliding window approach

Topic:
- string, permutation

Time Complexity : O(n2 x m)
Space Complexity : O(1) 
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool isFreqSame(int arr1[], int arr2[]){
        for(int i = 0; i < 26; i++){
            if(arr1[i] != arr2[i]){
                return false;
            }
        }
        return true;
    }

    bool permutationInString(string s1, string s2){ 
        int freq[26] = {0};

        for(int i = 0; i < s1.length(); i++){
            freq[s1[i] - 'a']++;
        }
        int windSize = s1.length();

        for(int i = 0; i < s2.length(); i++){
            int windIdx = 0, idx = i;
            int windFreq[26] = {0};

            while(windIdx < windSize && idx < s2.length()){
                windFreq[s2[idx] - 'a']++;
                windIdx++;
                idx++;
            }

            if(isFreqSame(freq, windFreq)){
                return true;
            }
        }
        return false;
    }
    
};

int main(){
    string s1 = "ab";
    string s2 = "eidbaooo";
    
    Solution obj;
    bool result = obj.permutationInString(s1, s2);

    if(result){
        cout << "Permutation of " << s1 << " is present in " << s2 << endl; 
    }else{
        cout << "Permutation of " << s1 << " is not present in " << s2 << endl; 
    }
}
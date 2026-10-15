/*
Problem : Reverse vowels in string
Platform: Leetcode
Difficulty: Easy

Approach:
- string, two pointer

Topic:
- string, reverse

Time Complexity : O(n)
Space Complexity : O(1) 
*/


#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool isVowel(char ch){
        if(ch == 'a' || ch == 'A' ||
        ch == 'e' || ch == 'E' ||
        ch == 'i' || ch == 'I' ||
        ch == 'o' || ch == 'O' ||
        ch == 'u' || ch == 'U'){
            return true;
        }
        return false;
    }

    string reverseVowels(string& str){
        int n = str.length();
    
        int st = 0;
        int end = n - 1;

        while(st <= end){
            if(!(isVowel(str[st]))){
                st++;
            }else if(!(isVowel(str[end]))){
                end--;
            }
            else{
                swap(str[st], str[end]);
                st++; end--;
            }
        }
    }
};

int main(){
    string str = "Leetcode";
    // "leotcede"

    Solution obj;
    obj.reverseVowels(str);

    cout << str;
}
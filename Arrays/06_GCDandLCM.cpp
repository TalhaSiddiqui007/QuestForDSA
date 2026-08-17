/*
Problem : GCD and LCM
Platform: None
Difficulty: Easy

Approach:
- travering

Topic:
- Array

Time Complexity : O(a X b) 
Space Complexity : O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> lcmAndGcd(int a, int b) {

        vector<int> arr(2);
        //Find LCM
        for(int i = 1; i <= a*b; i++){
            if(i % a == 0 && i % b == 0){
                arr[0] = i;
                break;
            }
        }

        //Find GCD
        for(int i = 1; i <= a && i <= b; i++){
            if(a % i == 0 && b % i == 0){
                arr[1] = i;
            }
        }
        return arr;
    }
};

int main(){
    int a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    Solution obj;
    vector<int> result = obj.lcmAndGcd(a ,b);

    for(int val : result){
        cout << val << " ";
    }
}
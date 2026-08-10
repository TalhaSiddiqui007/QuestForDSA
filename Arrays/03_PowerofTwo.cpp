/*
Problem : Power of Two
Platform: None
Difficulty: Easy

Approach:
- loop & bit manipulation

Topic:
- Array

Time Complexity : O(log n), O(n)
*/

#include <iostream>
#include <vector>

using namespace std;

bool powOfTwo(int n){
    // return n > 0 && (n & (n - 1)) == 0; approach - bit manipulation, O(1)

    //approach - loop, O(log n)
    if(n <= 0){
        return false;
    }

    int pow = 1;

    for(int i = 1; pow <= n; i++){
        pow *= 2;
        if(pow == n){
            return true;
        } 
    }
    return false;
}

int main(){
    int n;
    
    cout << "Enter a number: ";
    cin >> n;
    int result = powOfTwo(n);
    if(result){
        cout << "Yes, this number is a power of 2";
    }
    else{
        cout << "No, it is not power of two";
    }
}
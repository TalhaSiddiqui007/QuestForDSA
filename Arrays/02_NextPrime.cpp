/*
Problem : Next Prime
Platform: GeeksorGeeks
Difficulty: Medium

Approach:
- 

Topic:
- Array, Searching

Time Complexity : O(n)
*/
#include <iostream>
using namespace std;

class Solution{
public:
    int nextPrime(int n){
        int prime = n + 1;
        int yes = 0;
        while(yes == 0){
            yes = 1;
            for(int i = 2; i<n; i++){
                if(prime % i == 0){
                    prime++;
                    yes = 0;
                }
            }
        }
        return prime;
    }
};

int main(){
    Solution result;
    int n;
    cout <<"Enter a prime number: ";
    cin >> n;
    cout << "The Next prime number is: " << result.nextPrime(n);
}
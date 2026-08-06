#include <iostream>
#include <climits>
#include <vector>
using namespace std;

class Solution{
public:
    int secondLargest(vector<int>& arr){
        int max = INT_MIN;
        int max2 = INT_MIN;

        for(int i : arr){
            if(i > max){
                max2 = max;
                max = i;
            }else if(max2 < i && i != max){
                max2 = i;
            }
        }
        return max2;
    }
};

int main(){
    Solution result;
    int n;
    
    cout << "Enter the size of vector: ";
    cin >> n;

    if (n < 2) {
        cout << "Vector needs at least 2 elements." << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter the elements of vector: ";
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Second Max: " << result.secondLargest(arr) << endl;
}
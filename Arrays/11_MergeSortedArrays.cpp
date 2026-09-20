/*
Problem : Merge Two Sorted Arrays
Platform: LeetCode
Difficulty: Easy

Approach:
- Two pointer

Topic:
- Array, sorting

Time Complexity : O(M + N)
Space Complexity : O(1)
*/

#include <bits/stdc++.h>
using namespace std;

void merge(int arr1[], int m, int arr2[], int n) {

    int idx = m + n - 1;
    int i = m - 1;
    int j = n - 1;

    while (i >= 0 && j >= 0) {

        if (arr1[i] > arr2[j]) {
            arr1[idx] = arr1[i];
            i--;
        }
        else {
            arr1[idx] = arr2[j];
            j--;
        }

        idx--;
    }

    while (j >= 0) {
        arr1[idx] = arr2[j];
        j--;
        idx--;
    }
}

int main(){
    int m;
    cout << "Enter size of array1: ";
    cin >> m;

    int n;
    cout << "Enter size of array2: ";
    cin >> n;

    int arr1[m + n];
    int arr2[n];

    cout << "Enter sorted elements of array1: ";
    for(int i = 0; i < m; i++){
        cin >> arr1[i];
    }

    cout << "Enter sorted elements of array2: ";
    for(int i = 0; i < n; i++){
        cin >> arr2[i];
    }

    for(int i = 0; i < m; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < n; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;

    merge(arr1, m, arr2, n);

    cout << "Merged Array: ";

    for(int i = 0; i < m + n; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;

}
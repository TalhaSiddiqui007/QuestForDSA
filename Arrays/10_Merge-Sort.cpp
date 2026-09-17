/*
Problem : Merge Sort
Platform: None
Difficulty: Medium

Approach:
- Divide & Conquer

Topic:
- Array, sorting

Time Complexity : O(log n)
Space Complexity : O(n)
*/

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int st, int mid, int end){
    vector<int> temp;
    int i = st, j = mid + 1;

    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    // for left half remaining elements
    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }

    // for right half remaining elements
    while(j <= end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx = 0; idx < temp.size(); idx++){
        arr[idx+st] = temp[idx];
    }
}

void mergeSort(vector<int> &arr, int st, int end){
    if(st < end){
        int mid = st + (end - st)/2;

        mergeSort(arr, st, mid); // left half
        mergeSort(arr, mid + 1, end); // right half

        merge(arr, st, mid, end);
    }
}


int main(){
    vector<int> vec = {3,7,5,3,2,5,7,8,9,0};

    mergeSort(vec, 0, vec.size() - 1);

    for(int val:vec){
        cout << val << " ";
    }
}
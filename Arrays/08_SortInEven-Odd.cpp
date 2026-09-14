#include <iostream> 
using namespace std;
int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    // Separate the array by even and odd
    int pos = 0;
    for(int i = 0; i < n ; i++){
        if(arr[i] % 2 == 0){
            int temp = arr[i];
            arr[i] = arr[pos];
            arr[pos] = temp;
            pos++;
        }
    }

    // sorting even elements in acsending order
    for(int i = 0; i < pos - 1; i++){
        for(int j = i+1; j < pos; j++){
            if(arr[i] > arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    // sorting odd elements in acsending order
    for(int i = pos; i < n - 1; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
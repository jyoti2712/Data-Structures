#include<bits/stdc++.h>
using namespace std;

int findLargest(int arr[], int n){
    int max = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[] = {1, 8, 7, 56, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int LargestElement = findLargest(arr, n);
    cout << LargestElement;
    cout<< endl;
    return 0;
}

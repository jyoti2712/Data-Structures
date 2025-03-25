//1. Largest Element in an array

// Brute Force Approach

// Tc O(N*log(N))
// Sc O(1)

int sortArr(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}

// function LargestElement(arr){
//     max = arr[0]
//     for i= 0  to n{
//         if arr[i] > max 
//         max = arr[i];
//     }
//     return max;
// }
// TC = O(n)
// SC = O(1)

#include <bits/stdc++.h>
using namespace std;

int LargestElement(int arr[], int n){
    int max = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[] = {45, 24, 74, 1, 75};
    int n = sizeof(arr[0]);
    int max = LargestElement(arr, n);
    cout << max << " ";
    return 0;
}

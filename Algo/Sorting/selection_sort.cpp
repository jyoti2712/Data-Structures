#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int minIndex = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        if(minIndex != i){
            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
        }
    }
}

int main(){
    int arr[] = {13, 49, 25, 36, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i]<< " ";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n){
    for(int i = 0; i < n; i++){
        bool swapped = false;
        for(int j = 0; j <= n-i-2; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (swapped != true){
            break;
        }
    }
}
int main(){
    int arr[] = {13, 49, 25, 36, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i]<< " ";
    }
    return 0;
}
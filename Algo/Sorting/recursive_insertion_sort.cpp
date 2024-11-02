#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i = 0; i <= n-1; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    cout << "After Using insertion sort: " << "\n";
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void recursive_insertion_sort(int arr[], int i, int n){
    if(i == n) return;
    
    int j =i;
    while(j>0 && arr[j-1]>arr[j]){
        int temp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = temp;
        j--;
    }
    recursive_insertion_sort(arr, i+1, n);
}

int main(){
    int arr[] = {4, 1, 3, 2, 5};
    int n = sizeof(arr[0]);
    insertion_sort(arr, n);
    recursive_insertion_sort(arr, 0, n);
    cout << "After Using recursive insertion sort: " << "\n";
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

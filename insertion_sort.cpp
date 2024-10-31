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

int main(){
    int arr[] = {4, 1, 3, 2, 5};
    int n = sizeof(arr[0]);
    insertion_sort(arr, n);
    return 0;
}

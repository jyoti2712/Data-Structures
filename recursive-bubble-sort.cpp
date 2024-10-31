#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int i){
    if(i==0) return;
    for(int j = 0; j<=i-1; j++){
        if(arr[j] > arr[j+1]){
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
        }
    }
    bubble_sort(arr, i-1);
}

int main(){
    int arr[] = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = n -1;
    bubble_sort(arr, i);
    for(int i = 0; i < n; i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
    return 0;
}

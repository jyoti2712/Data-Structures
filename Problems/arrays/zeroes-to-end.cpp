#include<bits/stdc++.h>
using namespace std;

void shiftZero(int arr[], int n){
    int j = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    if(j == -1) {
        return;
    }
    
    
    for(int i = j+1; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    return;
}

int main(){
    int n = 7;
    int arr[] = {1,3,0,5,0,0,9};
    shiftZero(arr,n);
    for(int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }
    cout<< endl;
    return 0;
}

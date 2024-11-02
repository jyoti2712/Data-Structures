#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int num){
    for(int i = 0; i < n; i++){
        if(arr[i] == num){
            cout<< i;
        }
    }
    return -1;
}

int main(){
    int n = 10;
    int arr[] = {2, 54, 6, 1, 56, 85, 83, 78, 3, 99};
    int num = 85;
    linearSearch(arr, n, num);
    cout<< endl;
    return 0;
}

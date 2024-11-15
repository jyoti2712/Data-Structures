#include <bits/stdc++.h>
using namespace std;

int subarrayWithSumK(vector <int> a, int k){
    int xr = 0;
    map<int,int> mpp;
    map[xr]++;
    int cnt = 0;
    for (int i = 0; i<a.size();i++){
        xr = xr ^ a[i];
        int x = xr^k;
        cnt += mpp[x];
    }
    return cnt;
}

int main(){
    vector <int> a = {1,2,3,2};
    subarrayWithSumK(a, 2);
    return 0;
}
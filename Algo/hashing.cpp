// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int r = 0, l =0;
        int res = 0, total = 0;
        while (r < nums.size()){
            total = total + nums[r];
            while ((nums[r] * (r-l+1)) > (total + k)){
                total = total - nums[l];
                l++;
            }
            res = max(res, r-l+1);
            r++;
        }
        return res;
    }
    
int main() {
    vector <int>nums = {1,4,8,13};
    int k = 5;
    int res = maxFrequency(nums, k);
    cout<<res;
    return 0;
}
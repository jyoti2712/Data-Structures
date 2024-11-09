#include<bits/stdc++.h>
using namespace std;

void Rearrange(vector<int> &nums){
    int n = nums.size();
        vector<int> ans(n, 0);
        int negInd = 1, posIndex = 0;
        for (int i = 0; i < nums.size(); i++){
            if(nums[i] < 0){
                ans[negInd] = nums[i];
                negInd += 2;
            }
            else{
                ans[posIndex] = nums[i];
                posIndex += 2;
            }
        }
        return ans;
}

int main(){
    vector<int> nums = {3,1,-2,-5,2,-4};
    Rearrange(nums);
    return 0;
}
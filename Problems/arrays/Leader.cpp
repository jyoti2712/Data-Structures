#include <bits/stdc++.h>
using namespace std;

void function Leader(vector<int> nums)
{
    int n = arr.size();
    vector<int> result;
    int maxInd = INT_MIN;

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] >= maxInd)
        {
            result.push_back(arr[i]);
        }
        maxInd = max(maxInd, arr[i]);
    }
    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    Leader(nums);
    return 0;
}
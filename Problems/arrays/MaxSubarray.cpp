#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

// Maximum subarray problem
// total sum of subarray = n * (n + 1) / 2
// Brute force Approach

int main() {
    int a[] = {1, 2, 3, -2, 5}; // Example array
    int n = sizeof(a) / sizeof(a[0]);
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;
            for (int k = i; k <= j; k++) {
                sum += a[k];
            }
            maxSum = max(maxSum, sum);
        }
    }
    cout << "Maximum subarray sum is " << maxSum << endl;
    return 0;
}

// Time complexity of this approach is O(n^3)

//Better Approach
int main() {
    int maxSum = INT_MIN;
    for( int st = 0; st < n; st++) {
        int sum = 0;
        for( int en = st; en < n; en++) {
            sum += a[en];
            maxSum = max(maxSum, sum);
        }
    }
}

// Time complexity of this approach is O(n^2)

// Optimal Approach
// Kadane's Algorithm

int main() {
    int a[] = {1, 2, 3, -2, 5}; // Example array
    int n = sizeof(a) / sizeof(a[0]);
    int maxSum = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (sum < 0) {
            sum = 0;
        }
        maxSum = max(maxSum, sum);
    }
    cout << "Maximum subarray sum is " << maxSum << endl;
    return 0;
}
// Time complexity of this approach is O(n)

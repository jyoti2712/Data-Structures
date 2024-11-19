// Brute force approach comparing the elements from the next element
// TC O(n^2)
// Sc O(1)

int inversionCount(vector<int> &arr) {
        // Your Code Here
        int n = arr.size();
        int count = 0;
        for(int i = 0; i < n; i++){
            for (int j = i+1; j < n; j++){
                if(arr[i] > arr[j]) count++;
            }
        }
        return count;
}

// Optimal Approach
// Time Complexity: O(N*logN), where N = size of the given array.
// Reason: We are not changing the merge sort algorithm except by adding a variable to it. So, the time complexity is as same as the merge sort.

// Space Complexity: O(N), as in the merge sort We use a temporary array to store elements in sorted order.
class Solution {
  public:
  int merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //Modification 1: cnt variable to count the pairs:
    int cnt = 0;

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            cnt += (mid - left + 1); //Modification 2
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }

    return cnt; // Modification 3
}

int mergeSort(vector<int> &arr, int low, int high) {
    int cnt = 0;
    if (low >= high) return cnt;
    int mid = (low + high) / 2 ;
    cnt += mergeSort(arr, low, mid);  // left half
    cnt += mergeSort(arr, mid + 1, high); // right half
    cnt += merge(arr, low, mid, high);  // merging sorted halves
    return cnt;
}
    // Function to count inversions in the array.
    int inversionCount(vector<int> &a) {
        // Your Code Here
        int n = a.size();
        return mergeSort(a, 0, n - 1);
        
    }
};
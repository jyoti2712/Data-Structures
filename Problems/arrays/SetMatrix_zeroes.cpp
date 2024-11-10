#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();      // number of rows
        int n = matrix[0].size();   // number of columns
        int col0 = 1;               // flag for first column
        
        // First pass: mark zeros in first row and first column
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    // Mark the first element of the corresponding row and column
                    matrix[i][0] = 0; 
                    if (j != 0) { 
                        matrix[0][j] = 0;
                    } else {
                        col0 = 0; // mark if first column contains a zero
                    }
                }
            }
        }
        
        // Second pass: use the marks to set zeros in the interior of the matrix
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
        
        // Handle the first row
        if (matrix[0][0] == 0) {
            for (int j = 0; j < n; j++) {
                matrix[0][j] = 0;
            }
        }
        
        // Handle the first column
        if (col0 == 0) {
            for (int i = 0; i < m; i++) {
                matrix[i][0] = 0;
            }
        }
    }

    int main(){
        vector<vector<int>>matrix = [[1,1,1],[1,0,1],[1,1,1]];
        setZeroes(matrix);
        return 0;
    }
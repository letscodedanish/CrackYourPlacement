class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n = matrix.size();
        int m = matrix[0].size();
        int left=0,right=m-1,bottom=n-1,top=0;
        int direction = 1;

        while(left <= right && top <= bottom){
            if(direction == 1){
                for(int i=left;i<=right;i++){
                    ans.push_back(matrix[top][i]);
                }
                direction = 2;
                top++;
            }
            else if(direction == 2){
                for(int i=top;i<=bottom;i++){
                    ans.push_back(matrix[i][right]);
                }
                direction = 3;
                right--;
            }
            else if(direction == 3){
                for(int i=right;i>=left;i--){
                    ans.push_back(matrix[bottom][i]);
                }
                direction = 4;
                bottom--;
            }
            else if(direction == 4){
                for(int i=bottom;i>= top;i--){
                    ans.push_back(matrix[i][left]);
                }
                direction=1;
                left++;
            }
        }
        return ans;
    }
};

/*
Given an m x n matrix, return all elements of the matrix in spiral order.

 

Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
Example 2:


Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 10
-100 <= matrix[i][j] <= 100
*/

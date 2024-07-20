class Solution {
  public:
    void helper(vector<int> &arr,int curr,int n,set<vector<int>> &s){
        if(curr >= n){
            s.insert(arr);
            return;
        }
        for(int i=curr;i<n;i++){
            swap(arr[curr],arr[i]);
            helper(arr,curr+1,n,s);
            swap(arr[curr],arr[i]);
        }
    }
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
        vector<vector<int>> ans;
        set<vector<int>> s;
        
        helper(arr,0,n,s);
        for(auto i: s){
            ans.push_back(i);
        }
        return ans;
    }
};

/*
Given an array arr[] of length n. Find all possible unique permutations of the array in sorted order. A sequence A is greater than sequence B if there is an index i for which Aj = Bj for all j<i and Ai > Bi.

Example 1:

Input: 
n = 3
arr[] = {1, 2, 1}
Output: 
1 1 2
1 2 1
2 1 1
Explanation:
These are the only possible unique permutations
for the given array.
Example 2:

Input: 
n = 2
arr[] = {4, 5}
Output: 
Only possible 2 unique permutations are
4 5
5 4
Your Task:
You don't need to read input or print anything. You only need to complete the function uniquePerms() that takes an integer n, and an array arr of size n as input and returns a sorted list of lists containing all unique permutations of the array.

Expected Time Complexity:  O(n*n!)
Expected Auxilliary Space: O(n*n!)

Constraints:
1 ≤ n ≤ 9
*/

class Solution {
public:
    void solve(vector<string> &v,string str,int n,int m){
        if(n == 0 && m == 0){
            v.push_back(str);
            return;
        }
        if(m > 0){
            solve(v,str+')',n,m-1);
        }
        if(n > 0){
            solve(v,str+'(',n-1,m+1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(ans,"",n,0);
        return ans;
    }
};

/*
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

 

Example 1:

Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]
Example 2:

Input: n = 1
Output: ["()"]
 

Constraints:

1 <= n <= 8
*/

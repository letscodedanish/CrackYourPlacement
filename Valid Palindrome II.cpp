class Solution {
public:
    bool isPalindrome(const string& s,int left,int right){
        while(left<right){
            if (s[left] != s[right]) return false;
            ++left;
            --right;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n = s.size();
        int i=0,j=n-1;
        while(i<j){
            if(s[i] != s[j]){
                return isPalindrome(s,i+1,j) || isPalindrome(s,i,j-1);
            }
            ++i;
            --j;
        }
        return true;
    }
};

/*
Given a string s, return true if the s can be palindrome after deleting at most one character from it.

 

Example 1:

Input: s = "aba"
Output: true
Example 2:

Input: s = "abca"
Output: true
Explanation: You could delete the character 'c'.
Example 3:

Input: s = "abc"
Output: false
 

Constraints:

1 <= s.length <= 105
s consists of lowercase English letters.
*/

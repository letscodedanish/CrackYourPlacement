class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //can be simply done by hashmap
        //but moore's voting algorithm is the most efficient
        int n = nums.size();
        int cnt = 0;
        int ele = 0;
        int i=0;

        while(i<n){
            if(cnt == 0){
                ele = nums[i];
            }
            if(nums[i] == ele){
                cnt++;
            }
            else{
                cnt--;
            }
            i++;
        }
        return ele;
    }
};

/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 

Constraints:

n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109
 

Follow-up: Could you solve the problem in linear time and in O(1) space?
*/

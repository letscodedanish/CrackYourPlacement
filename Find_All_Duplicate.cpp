//we can simply do it by map, but we are using extra space, so we can do it in-place by marking elements visited by -ve

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        if(nums.empty()) return {};
        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i]) -1 ] < 0){
                ans.push_back(abs(nums[i]));
            }
            nums[abs(nums[i])-1] = -nums[abs(nums[i])-1];
        }
        return ans;
    }
};

/*
Assume I/O Array   A -[ 4,   3,   2,   7,   8,    2,   3,    1   ]
          index -       0     1    2   3    4     5    6      7
		  
				   
				   index                 element                       Todo                               
				    0                      A[0] = 4                   A[4-1] Not negative
					                                                  do it negetive mean we visited 4
																	                          array - [4,3,2,-7,8,2,3,1]
																	 
  					1                     A[1] = 3                      A[3-1] Not negative
  					                                                    do it negetive mean we visited 3
  					                                                    array - [4,3,-2,-7,8,2,3,1]
  																	  
           2                      A[2] = 2                      A[2-1] Not negative
  				                                                        do it negetive mean we visited 2
  																	                            array - [4,-3,-2,-7,8,2,3,1]
																	 
				   3                        A[3]=7                      A[7-1] Not negative
				                                                        do it negetive mean we visited 7
																                                Array- [4,-3,-2,-7,8,2,-3,1]
																 
				   4                       A[4]=8                      A[8-1] Not negative
				                                                       do it negetive mean we visited 8
																                                Array- [4,-3,-2,-7,8,2,-3,-1]
																 
				   5                     A[5]=2                       A[2-1] is Negative Mean It is A 
				                                                      duplicate ele so Put it into ans array  
																                               Array- [4,-3,-2,-7,8,2,-3,-1]
																
           6                   A[6]=3                        A[3-1] is Negative Mean It is A 
                                                              duplicate ele so Put it into ans array  
                                                            Array- [4,-3,-2,-7,8,2,-3,-1]
																
          	7                  A[7] = 1                     A[1-1] Not negative
          					                                        do it negetive mean we visited 1
                                                           Array- [-4,-3,-2,-7,8,2,-3,-1]
															   
	So we Have {2 , 3 }  <= Here For ans
*/

/*
Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant extra space.

 

Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]
Example 2:

Input: nums = [1,1,2]
Output: [1]
Example 3:

Input: nums = [1]
Output: []
 

Constraints:

n == nums.length
1 <= n <= 105
1 <= nums[i] <= n
Each element in nums appears once or twice.
*/

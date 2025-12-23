// LeetCode 53: Maximum Subarray
// Approach: Kadane's Algorithm
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size(),currsum=nums[0],maxsum=nums[0];

        for(int i=1;i<n;i++){
            
            if (nums[i]>currsum+nums[i]){
                currsum=nums[i];
            }
              else {
                currsum=nums[i]+currsum;
            }         
          maxsum=max(maxsum,currsum);
        }
  return maxsum;  }
};

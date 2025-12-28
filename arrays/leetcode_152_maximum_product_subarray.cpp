// LeetCode 152: Maximum Product Subarray
// Approach: Dynamic Programming (track max & min product)
// Why min? Negative × negative can become maximum
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxproduct=1,minproduct=1,bigmax=INT_MIN,i,n=nums.size();
        for(i=0;i<n;i++){
            if(maxproduct*nums[i]<minproduct*nums[i]){
            swap(maxproduct,minproduct);
            }
         maxproduct=max(nums[i],maxproduct*nums[i]);
         minproduct=min(nums[i],minproduct*nums[i]);
         bigmax=max(maxproduct,bigmax);
         }
        return bigmax;
    }
};

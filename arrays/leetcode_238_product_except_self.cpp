// LeetCode 238: Product of Array Except Self
// Approach: Prefix and Suffix Product
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size(), i, lprod = 1, rprod = 1;
        vector<int> leftarray(n), rightarray(n), finprod(n);
        leftarray[0] = 1;
        rightarray[n - 1] = 1;
        // Build prefix product array
        for (i = 1; i < n; i++) {
            lprod *= nums[i - 1];
            leftarray[i] = lprod;
        }
        // Build suffix product array
        for (int j = n - 2; j >= 0; j--) {
            rprod *= nums[j + 1];
            rightarray[j] = rprod;
        }
        // Final result
        for (i = 0; i < n; i++) {
            finprod[i] = leftarray[i] * rightarray[i];
        }
        return finprod;
    }
};

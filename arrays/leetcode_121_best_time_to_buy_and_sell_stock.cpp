// LeetCode 121: Best Time to Buy and Sell Stock
// Approach: Single pass (tracking minimum price so far)
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = INT_MAX,maxprofit = 0;
        for (int price : prices) {
            if (price < minprice) {
                minprice = price;    
            } else {
                maxprofit = max(maxprofit, price - minprice);
            }
        }
        return maxprofit;
    }
};

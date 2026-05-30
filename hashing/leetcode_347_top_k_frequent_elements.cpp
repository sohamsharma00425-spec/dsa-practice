// LeetCode 347: Top K Frequent Elements
// Topic: Hashing + Sorting
// Approach: Count frequencies using unordered_map and sort by frequency
// Time Complexity: O(n log n)
// Space Complexity: O(n)
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        vector<int>ans;
        vector<pair<int,int>>pairs;
        for(auto x : nums){
            freq[x]++;
        }
        for(auto x : freq){
            pairs.push_back({x.second,x.first});
        }
        sort(pairs.begin(),pairs.end(),greater<pair<int,int>>());
        for(int i=0;i<k;i++){
            ans.push_back(pairs[i].second);
        }
    return ans;
    }
};

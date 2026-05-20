// LeetCode 217: Contains Duplicate
// Topic: Hashing
// Approach: Hash Set
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>unqset;
        for(int i=0;i<nums.size();i++){ 
        unqset.insert(nums[i]);
        }
    if(nums.size()==unqset.size()){
        return false;
    }
    else{
        return true;
    }
    }
    };

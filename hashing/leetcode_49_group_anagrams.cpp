// LeetCode 49: Group Anagrams
// Topic: Hashing + Strings
// Approach: Sort each string and use it as a key
// Time Complexity: O(n × k log k)
// Space Complexity: O(nk)
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>anagramgroup;
        vector<vector<string>>ans;
        for(int i=0;i<strs.size();i++){
            string s1=strs[i];
            sort(s1.begin(),s1.end());
            anagramgroup[s1].push_back(strs[i]);
        }
        for(auto x : anagramgroup){
            ans.push_back(x.second);
        }
    return ans;
    }
};

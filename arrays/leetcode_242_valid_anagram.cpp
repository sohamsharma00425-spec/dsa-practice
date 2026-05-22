// LeetCode 242: Valid Anagram
// Topic: Hashing + Strings
// Approach: Frequency counting using maps
// Time Complexity: O(n log n)
// Space Complexity: O(n)
class Solution {
public:
    bool isAnagram(string s, string t) {
    map<char,int>smap;
    map<char,int>tmap;
    if(s.size()==t.size()){
        for(char c : s){
            smap[c]++;
        }
        for(char c : t){
            tmap[c]++;
        }
        if(smap==tmap){
        return true;
    }
    }

    return false;
    }
};

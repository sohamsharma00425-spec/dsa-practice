// LeetCode 242: Valid Anagram
// Topic: Strings + Sorting
// Approach: Sort both strings and compare
// Time Complexity: O(n log n)
// Space Complexity: O(1)
class Solution {
public:
    bool isAnagram(string s, string t) {
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        return true;
    }
    else{
        return false;
    }
    }
};


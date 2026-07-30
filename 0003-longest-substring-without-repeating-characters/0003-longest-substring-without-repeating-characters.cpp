class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>count(128,0);
        int l=0,maxLength=0;
        for (int r=0;r<s.length();r++) {
            count[s[r]]++;
            while (count[s[r]]>1)count[s[l++]]--;
            maxLength=max(maxLength,r-l+1);
        }
        return maxLength;
    }
};
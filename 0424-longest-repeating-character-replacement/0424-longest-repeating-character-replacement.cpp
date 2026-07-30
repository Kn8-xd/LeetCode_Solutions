class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,maxfreq=0,res=0;
        unordered_map<char,int>cnt;
        for(int r=0;r<s.size();r++) {
            cnt[s[r]]++;
            maxfreq=max(maxfreq,cnt[s[r]]);
            while((r-l+1)-maxfreq>k) {
                cnt[s[l]]--;
                l++;
            }
        res=max(res,r-l+1);
        }
        return res;
    }
};
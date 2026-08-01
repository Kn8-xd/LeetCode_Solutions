class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int slen=s.length(),plen=p.length();
        if(s.size()<p.size()) return{};
        vector<int>window(26,0);
        vector<int>freq(26,0);
        for(int i=0;i<plen;i++) {
            window[s[i]-'a']++;
            freq[p[i]-'a']++;
        }
        vector<int>ans;
        if(freq==window) ans.push_back(0);
        for(int i=plen;i<slen;i++) {
            window[s[i-plen]-'a']--;
            window[s[i]-'a']++;
            if(freq==window)ans.push_back(i-plen+1);
        }
        return ans;
    }
};
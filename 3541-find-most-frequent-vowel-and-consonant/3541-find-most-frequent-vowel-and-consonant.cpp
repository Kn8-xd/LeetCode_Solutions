class Solution {
public:
    int maxFreqSum(string s) {
        int vow=0,con=0;
        string vows="aeiou";
        unordered_map<char,int> ans;
        for(int i=0;i<s.size();i++) {
            ans[s[i]]++;
            if (vows.find(s[i])!=string::npos) vow=max(vow,ans[s[i]]);
            if (vows.find(s[i])==string::npos) con=max(con,ans[s[i]]);
            }
        return vow+con;
    }
};
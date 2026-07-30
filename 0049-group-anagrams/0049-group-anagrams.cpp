class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> ans;
        for(string s:strs) {
            vector<int>cnt(26,0);
            for(char c:s) {
                cnt[c-'a']++;
            }
            string key="";
            for(int i=0;i<26;i++) {
                key+=to_string(cnt[i])+"-";
            }
            ans[key].push_back(s);
        }
        vector<vector<string>> res;
        for(pair <string,vector<string>> s:ans) {
            res.push_back(s.second);
        }
        return res;
    }
};
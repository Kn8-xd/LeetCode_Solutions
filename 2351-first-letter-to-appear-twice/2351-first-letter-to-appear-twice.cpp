class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int> ans;
        for(int i=0;i<s.size();i++) {
            ans[s[i]]++;
            if(ans[s[i]]==2) return s[i];
        }
        return -1;
    }
};
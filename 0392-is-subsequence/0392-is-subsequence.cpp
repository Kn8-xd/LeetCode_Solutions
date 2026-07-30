class Solution {
public:
    bool isSubsequence(string s, string t) {
        int x=0,y=0;
        while(x<s.length()&&y<t.length()) {
            if(s[x]==t[y]) x++;
            y++;
        }
        return x==s.length();
    }
};
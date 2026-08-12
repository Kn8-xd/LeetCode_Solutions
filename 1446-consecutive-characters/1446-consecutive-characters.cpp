class Solution {
public:
    int maxPower(string s) {
        int cnt=0,res=0;
        for(int i=0;i<s.length();i++) {
            if(s[i]==s[i+1]) cnt++;
            else {
                res=max(res,cnt);
                cnt=0;
            }
        }
        return res+1;
    }
};
class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int zerc=0,onec=0,cnt=0,l=0;
        for(int r=0;r<s.size();r++) {
            if(s[r]=='0') zerc++;
            else if(s[r]=='1') onec++;
            while(zerc>k&&onec>k) {
                if(s[l]=='0') zerc--;
                else if(s[l]=='1') onec--;
                l++;
            }
            cnt+=(r-l+1);
        }
        return cnt;
    }
};
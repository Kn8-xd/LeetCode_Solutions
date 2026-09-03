class Solution {
public:
    int numberOfSubstrings(string s) {
        int l=0,a=0,b=0,c=0,sol=0;
        for(int r=0;r<s.size();r++) {
            if(s[r]=='a') a++;
            else if(s[r]=='b') b++;
            else c++;
            while(a&&b&&c) {
                if(s[l]=='a') a--;
                else if(s[l]=='b') b--;
                else c--;
                l++;
            }
            sol+=l;
        }
        return sol;
    }
};
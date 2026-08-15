class Solution {
public:
    string reverseWords(string s) {
        int l=0,n=s.length();
        for(int r=0;r<=n;r++) {
            if(r==n||s[r]==' ') {
                reverse(s.begin()+l,s.begin()+r);
                l=r+1;
            }
        }
        return s;
    }
};
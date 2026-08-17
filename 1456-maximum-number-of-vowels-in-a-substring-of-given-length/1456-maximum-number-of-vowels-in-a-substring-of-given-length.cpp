class Solution {
public:
    int maxVowels(string s, int k) {
        string vows="aeiou";
        int vowcnt=0,maxcnt=0,l=0;
        for(int r=0;r<s.size();r++) {
            if(vows.find(s[r])!=string::npos) {
                vowcnt++;
            }
            if(r-l+1==k) {
                maxcnt=max(maxcnt,vowcnt);
                if(vows.find(s[l])!=string::npos) vowcnt--;
                l++;
            }
        }
        return maxcnt;
    }
};
class Solution {
public:
    string minWindow(string s, string t) {
        if(t.empty()||s.empty()) return "";
        unordered_map<int,int> countT,len;
        for(char c:t) countT[c]++;
        int have=0,need=countT.size();
        int res=INT_MAX,l=0,start=0;
        for(int r=0;r<s.size();r++) {
            char c=s[r];
            len[c]++;
            if(countT.count(c)&&len[c]==countT[c]) {
                have++;
            }
            while(have==need) {
                if((r-l+1)<res) {
                    res=r-l+1;
                    start=l;
                }
                char leftch=s[l];
                len[leftch]--;
                if(countT.count(leftch)&&len[leftch]<countT[leftch]) have--;
                l++;
            }
        }
        return res==INT_MAX ? "" : s.substr(start,res);
    }
};
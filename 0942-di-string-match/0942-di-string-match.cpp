class Solution {
public:
    vector<int> diStringMatch(string s) {
        int l=0,r=s.size();
        vector<int>res;
        for (char c:s) {
            res.push_back(c=='I'?l++:r--);
        }
        res.push_back(l);
        return res;
    }
};
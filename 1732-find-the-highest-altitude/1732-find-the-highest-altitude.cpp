class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int cur=0,maxx=0;
        for(int i=0;i<gain.size();i++) {
            cur+=gain[i];
            maxx=max(maxx,cur);
        }
        return maxx;
    }
};
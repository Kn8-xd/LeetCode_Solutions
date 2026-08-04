class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> ans(nums.begin(),nums.end());
        int maxcnt=0;
        for(int x:ans) {
            if(!ans.count(x-1)) {
                int curnum=x;
                int curlen=1;
            while(ans.count(curnum+1)) {
                curnum++;
                curlen++;
            }
            maxcnt=max(maxcnt,curlen);
            }
        }
        return maxcnt;
    }
};
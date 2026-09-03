class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0,len=0;
        int zcnt=0;
        for (int r=0;r<nums.size();r++) {
            if (nums[r]==0) {
                zcnt++;
            }
            while (zcnt>1) { 
                if (nums[l]==0) {
                    zcnt--;
                }
                l++;
            }
            len=max(len,r-l); 
        }
        return len;
    }
};
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int len=0,maxx=0;
        for(int r=0;r<nums.size();r++) {
            if(nums[r]==0) {
                len=0;
                continue;
            }
            len++;
            maxx=max(maxx,len);
        }
        return maxx;
    }
};
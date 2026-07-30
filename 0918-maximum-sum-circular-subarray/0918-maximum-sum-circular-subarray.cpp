class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int minsum=INT_MAX,curmin=0,maxsum=INT_MIN,curmax=0;
        int tot=accumulate(nums.begin(),nums.end(),0);
        for(int i=0;i<nums.size();i++) {
            curmin+=nums[i];
            minsum=min(minsum,curmin);
            if(curmin>0) curmin=0;

            curmax+=nums[i];
            maxsum=max(maxsum,curmax);
            if(curmax<0) curmax=0;
        }
        if(maxsum<0) return maxsum;
        return max(maxsum,tot-minsum);
    }
};
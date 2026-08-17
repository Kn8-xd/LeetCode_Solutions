class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int lsum=0,rsum=accumulate(nums.begin(),nums.end(),0);
        for(int i=0;i<nums.size();i++) {
            int x=nums[i];
            rsum-=x;
            ans[i]=abs(lsum-rsum);
            lsum+=x;
        }
        return ans;
    }
};
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3) return 0;
        int l=0,str=0,ans=0;
        for(int r=2;r<nums.size();r++) {
            if(nums[r]-nums[r-1]==nums[r-1]-nums[r-2]) {
                str++;
                ans+=str;
            }
            else str=0;
        }
        return ans;
    }
};
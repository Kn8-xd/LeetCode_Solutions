class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n=nums.size(),tot=0;
        for(int i=0;i<n;i++) {
            int start=max(0,i-nums[i]);
            for (int j=start;j<=i;j++) tot+=nums[j];
        }
        return tot;
    }
};
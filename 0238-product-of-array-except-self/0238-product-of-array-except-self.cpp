class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,1);
        int lprod=1,rprod=1;
        for(int i=0;i<n;i++) {
            ans[i]=lprod;
            lprod*=nums[i];
        }
        for(int i=n-1;i>=0;i--) {
            ans[i]*=rprod;
            rprod*=nums[i];
        }
        return ans;
    }
};
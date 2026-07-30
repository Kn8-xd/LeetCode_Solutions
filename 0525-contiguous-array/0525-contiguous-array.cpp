class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        mp[0]=-1;
        int bal=0,ans=0;
        for(int i=0;i<nums.size();i++) {
            bal+=nums[i]?1:-1;
            if(mp.count(bal)) {
                ans=max(ans,i-mp[bal]);
            } else mp[bal]=i;
        }
        return ans;
    }
};
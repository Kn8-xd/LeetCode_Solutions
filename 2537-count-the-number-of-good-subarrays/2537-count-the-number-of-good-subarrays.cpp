class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        unordered_map<int,int>count;
        long long ans=0,pairs=0;
        int l=0;
        for(int r=0;r<nums.size();r++) {
            pairs+=count[nums[r]];
            count[nums[r]]++;
            while(pairs>=k) {
                ans+=nums.size()-r;
                count[nums[l]]--;
                pairs-=count[nums[l]];
                l++;
            }
        }
        return ans;
    }
};
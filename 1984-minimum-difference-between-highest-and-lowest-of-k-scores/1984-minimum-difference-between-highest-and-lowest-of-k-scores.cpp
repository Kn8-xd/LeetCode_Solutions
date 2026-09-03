class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int minn=INT_MAX;
        for (int i=0;i<=nums.size()-k;i++) {
            minn=min(minn,nums[i+k-1]-nums[i]);
        }
        return minn;
    }
};
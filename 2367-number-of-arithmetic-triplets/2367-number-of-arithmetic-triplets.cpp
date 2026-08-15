class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_set<int> ans(nums.begin(),nums.end());
        int cnt=0;
        for(int num:nums) {
            if(ans.count(num+diff)&&ans.count(num+2*diff)) cnt++;
        }
        return cnt;
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> cnt;
        for(int num:nums) {
            cnt[num]++;
            if(cnt[num]>nums.size()/2) return num;
        }
        return -1;
    }
};
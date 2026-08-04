class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> mp;
        for(int x:nums1) {
            for(int y:nums2) {
                mp[x+y]++;
            }
        }
        int cnt=0;
        for(int z:nums3) {
            for(int a:nums4) {
                int targ=-(a+z);
                if(mp.count(targ)) cnt+=mp[targ];
            }
        }
        return cnt;
    }
};
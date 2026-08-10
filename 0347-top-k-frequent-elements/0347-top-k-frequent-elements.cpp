class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int>sol;
        for(int x:nums) mp[x]++;
        vector<vector<int>>freq(nums.size()+1);
        for(auto& [num,count]:mp) {
            freq[count].push_back(num);
        }
        for(int i=freq.size()-1;i>=1;i--) {
            if(!freq[i].empty()) {
                for(int num:freq[i]) sol.push_back(num);
                if(sol.size()==k) return sol;
            }
        } 
        return sol;
    }
};
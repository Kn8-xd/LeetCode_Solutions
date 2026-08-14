class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int>unq(nums.begin(),nums.end());
        int tot=unq.size();
        unordered_map<int,int>wincnt;
        int l=0,ans=0,n=nums.size();
        for(int r=0;r<n;r++) {
            wincnt[nums[r]]++;
            while(wincnt.size()==tot) {
                ans+=n-r;
                wincnt[nums[l]]--;
                if(wincnt[nums[l]]==0) wincnt.erase(nums[l]);
                l++;
            }
        }
        return ans;
    }
};
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int max=accumulate(nums.begin(),nums.end(),0);
        int lsum=0;
        for(int i=0;i<nums.size();i++) {
            max-=nums[i];
            if(lsum==max) return i;
            lsum+=nums[i];
        }
        return -1;
    }
};
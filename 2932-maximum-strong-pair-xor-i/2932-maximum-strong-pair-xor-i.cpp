class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int maxx=0;
        for(int i=0;i<nums.size();i++) {
            for(int j=i;j<nums.size();j++) {
                int x=nums[i];
                int y=nums[j];
                if(abs(x-y)<=min(x,y)) maxx=max(maxx,x^y);
            }
        }
        return maxx;
    }
};
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1,r=0;
        for(int x:nums) r=max(x,r);
        while(l<=r) {
            int mid=l+(r-l)/2,div=0;
            for(int x:nums) div+=(x+mid-1)/mid;
            if(div>threshold) l=mid+1;
            else r=mid-1;
        }
        return l;
    }
};
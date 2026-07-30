class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int cursum=0;
        int l=0;
        double maxx=INT_MIN;
        for(int r=0;r<nums.size();r++) {
            cursum+=nums[r];
            if(r-l+1==k) {
                maxx=max(maxx,(double)cursum);
                cursum-=nums[l++];
            }
        }
        return maxx/k;
    }
};
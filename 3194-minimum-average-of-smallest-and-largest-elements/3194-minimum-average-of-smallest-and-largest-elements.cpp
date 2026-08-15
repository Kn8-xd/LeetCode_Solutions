class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        double min_avg=INT_MAX;
        for(int i=0;i<n/2;i++) {
            double avg=(nums[i]+nums[n-i-1])/2.0;
            min_avg=min(min_avg,avg);
        }
        return min_avg;
    }
};
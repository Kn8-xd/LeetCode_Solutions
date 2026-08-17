class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int n=nums.size();
        vector<long long>prefix(n+1,0);
        for (int i=0;i<n;i++) {
            prefix[i+1]=prefix[i]+nums[i];
        }
        vector<int> q(n+1,0);
        int head=0;
        int tail=0;
        int minlen=INT_MAX;
        for (int i=0;i<=n;i++) {
            while (head<tail&&prefix[i]-prefix[q[head]]>= k) {
                minlen=min(minlen, i-q[head]);
                head++;
            }
            while (head<tail&&prefix[i]<=prefix[q[tail-1]]) tail--;
            q[tail]=i;
            tail++;
        }
        return minlen==INT_MAX?-1:minlen;
    }
};
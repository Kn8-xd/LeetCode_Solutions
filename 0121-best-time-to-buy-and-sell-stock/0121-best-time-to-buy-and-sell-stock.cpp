class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp=INT_MAX,ans=0;
        for(int i=0;i<prices.size();i++) {
            minp=min(minp,prices[i]);
            ans=max(ans,prices[i]-minp);
        }
        return ans;
    }
};
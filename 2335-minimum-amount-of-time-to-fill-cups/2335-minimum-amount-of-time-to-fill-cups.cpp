class Solution {
public:
    int fillCups(vector<int>& amount) {
        int mx=max({amount[0],amount[1],amount[2]});
        int sum=amount[0]+amount[1]+amount[2];
        return max(mx,(sum+1)/2);
    }
};
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxx=0;
        for(int candy:candies) {
            maxx= max(maxx,candy);
        }
        vector<bool>result;
        for(int candy:candies) {
            result.push_back(candy+extraCandies>=maxx);
        }
        return result;
    }
};
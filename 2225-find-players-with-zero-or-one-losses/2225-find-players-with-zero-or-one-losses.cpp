class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>lost;
        for(int i=0;i<matches.size();i++) {
            int lose=matches[i][1];
            lost[lose]++;
        }
        vector<int>notlost;
        vector<int>oncelost;
        for(int i=0;i<matches.size();i++) {
            int winner=matches[i][0];
            int loser=matches[i][1];
            if(lost.find(winner)==lost.end()) {
                notlost.push_back(winner);
                lost[winner]=2;
            }
            if(lost[loser]==1)
            oncelost.push_back(loser);
        }
        sort(notlost.begin(),notlost.end());
        sort(oncelost.begin(),oncelost.end());
        return {notlost,oncelost};
    }
};
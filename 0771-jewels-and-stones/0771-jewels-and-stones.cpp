class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int res=0;
        unordered_set<char>set(jewels.begin(),jewels.end());
        for(char s:stones)
        if(set.count(s)) res++;
        return res;
    }
};
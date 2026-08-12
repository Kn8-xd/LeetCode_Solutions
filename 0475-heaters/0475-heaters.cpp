class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());
        int rad=0,i=0;
        for(int house:houses) {
            while(i+1<heaters.size()) {
                if(abs(heaters[i+1]-house)>abs(heaters[i]-house)) break;
                i++;
            }
            rad=max(rad,abs(heaters[i]-house));
        }
        return rad;
    }
};
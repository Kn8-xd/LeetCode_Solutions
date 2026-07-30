class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        int n=barcodes.size();
        vector<int>result(n);
        unordered_map<int,int> count;
        for(int x:barcodes) count[x]++;
        sort(barcodes.begin(),barcodes.end(),[&](int a,int b) {
            if(count[a]!=count[b]) return count[a]>count[b];
            return a<b;
        });
        int index=0;
        for(int i=0;i<n;i++){
            result[index]=barcodes[i];
            index+=2;
            if(index>=n) index=1;
        }
        return result;
    }
};
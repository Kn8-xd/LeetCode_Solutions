class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r=matrix.size(),c=matrix[0].size();
        vector<bool> zrow(r,false);
        vector<bool> zcol(c,false);
        for(int i=0;i<r;i++) {
            for(int j=0;j<c;j++) {
                if(matrix[i][j]==0) {
                    zrow[i]=true;
                    zcol[j]=true;
                }
            }
        }
        for(int i=0;i<r;i++) {
            for(int j=0;j<c;j++) {
                if(zrow[i]||zcol[j]) matrix[i][j]=0;
            }
        }
    }
};
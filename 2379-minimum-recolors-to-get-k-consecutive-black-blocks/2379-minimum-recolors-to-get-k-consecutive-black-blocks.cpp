class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int minn=INT_MAX,l=0,cnt=0;
        for(int r=0;r<blocks.size();r++) {
            if(blocks[r]=='W') cnt++;
            if(r-l+1==k) {
                minn=min(minn,cnt);
                if(blocks[l]=='W') cnt--;
                l++;
            }
        }
        return minn;
    }
};
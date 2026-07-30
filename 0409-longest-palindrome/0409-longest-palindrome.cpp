class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> count(128,0);
        for(char c:s) count[c]++;
        int length=0;
        bool oddd=false;
        for(int counts:count) {
            length+=(counts/2)*2;
            if(counts%2!=0) oddd=true;
        }
        if(oddd==true) length++;
        return length;
    }
};
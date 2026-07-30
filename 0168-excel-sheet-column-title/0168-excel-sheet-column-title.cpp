class Solution {
public:
    string convertToTitle(int columnNumber) {
        int div=columnNumber;
        string s = "";
        while(div>0) {
            if(div<=26) {
                s+=(char)div+64;
                div=0;
            } else {
            int rem=div%26;
            if(rem!=0) s+=(char)rem+64;
            if(rem==0) {
                s+='Z';
                div-=1;
            }
            div/=26;
            }
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
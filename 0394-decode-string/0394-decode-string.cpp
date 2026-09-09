class Solution {
public:
    string decodeString(string s) {
        int i=0;
        return decode(s,i);
    }
    string decode(string &s,int &i) {
        string res;
        for (int num = 0; i < s.size() && s[i] != ']'; i++) {
            if (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
            } else if (s[i] == '[') {
                string inner = decode(s, ++i); 
                while (num-- > 0) res += inner; 
                num = 0;
            } else {
                res += s[i];
            }
        }
         return res;
    }
};
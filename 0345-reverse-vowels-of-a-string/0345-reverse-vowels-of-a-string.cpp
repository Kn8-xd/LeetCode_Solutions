class Solution {
public:
    bool isVowel(char d) {
        string vowels="aeiouAEIOU";
        if(vowels.find(d)!=string::npos) return 1;
        return 0;
    } 
    string reverseVowels(string s) {
        int x=0,y=s.length()-1;
        while(x<y) {
        while(x<y&&!isVowel(s[x])) {
                x++;
            }
        while(x<y&&!isVowel(s[y])) {
                y--;
            }
        if(x<y) {
                        swap(s[x],s[y]);
                        x++;
                        y--;
                    }
                }
        return s;
    }
};
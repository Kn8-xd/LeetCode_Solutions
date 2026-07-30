class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i=0;i<tokens.size();i++) {
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="/"||tokens[i]=="*") {
            int f1=st.top();
            st.pop();
            int f2=st.top();
            st.pop();
            if(tokens[i]=="+")
            st.push(f1+f2);
            if(tokens[i]=="-")
            st.push(f2-f1);
            if(tokens[i]=="/")
            st.push(f2/f1);
            if(tokens[i]=="*")
            st.push(f1*f2);
        }
        else{
            st.push(stoi(tokens[i]));
        }
        }
        return st.top();
    }
};
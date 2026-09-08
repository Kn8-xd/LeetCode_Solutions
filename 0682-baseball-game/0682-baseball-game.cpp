class Solution {
public:
    int calPoints(vector<string>& operations) {
        int val1,val2,sum=0;
        stack<int>stk;
        for(string s:operations) {
            if(s=="C") {
                stk.pop();
            }
            else if(s=="D") {
                stk.push(2*stk.top());
            }
            else if(s=="+") {
                val1=stk.top();
                stk.pop();
                val2=stk.top();
                stk.push(val1);
                stk.push(val1+val2);
            }
            else {
                stk.push(stoi(s));
            }
        }
        while(stk.size()!=0) {
            sum+=stk.top();
            stk.pop();
        }
        return sum;
    }
};
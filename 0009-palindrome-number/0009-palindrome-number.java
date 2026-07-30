class Solution {
    public boolean isPalindrome(int x) {
        int n=x;
        int rev=0;
        while(n>0){
            int r=n%10;
            rev=r+rev*10;
            n/=10;
        }
        if(rev==x)
        return true;
        else
        return false;
    }
}
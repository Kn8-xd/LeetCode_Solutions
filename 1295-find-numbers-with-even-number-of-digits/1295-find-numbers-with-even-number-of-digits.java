class Solution {
    public int findNumbers(int[] nums) {
        int cnt=0;
        for(int eachValue:nums) {
            if(Integer.toString(eachValue).length()%2==0) cnt++;
        }
        return cnt;
    }
}
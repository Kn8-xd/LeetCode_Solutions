class Solution {
    public int[] decompressRLElist(int[] nums) {
        List<Integer>ans=new ArrayList<>();
        for(int i=0;i<nums.length;i++) {
            if(i%2==0)
            while(nums[i]>0) {
                ans.add(nums[i+1]);
                nums[i]--;
            }
        }
        int res[]=new int[ans.size()];
        for(int k=0;k<ans.size();k++)
        res[k]=ans.get(k);
        return res;
    }
}
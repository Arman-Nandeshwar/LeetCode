class Solution {
    public int jump(int[] nums) {
        int n = nums.length;

        int jumps = 0, l=0,r=0;
        while(r<n-1){
            int farthest = 0;
            for(int ind=l;ind<=r;ind++){
                farthest = Math.max(ind + nums[ind], farthest);
            }
            l=r+1;
            r=farthest;
            jumps++;
        }
        return jumps;
    }
}
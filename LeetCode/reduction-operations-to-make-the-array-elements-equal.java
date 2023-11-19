class Solution {
    public int reductionOperations(int[] nums) {
        Arrays.sort(nums);
        int ans = 0;
        int n = nums.length;
        int num = nums[n - 1];
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] != num){
                ans += n - i - 1;
                num = nums[i];
            }
        }
        return ans;
    }
}

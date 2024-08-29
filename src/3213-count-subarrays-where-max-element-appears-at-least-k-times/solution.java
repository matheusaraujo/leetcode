class Solution {
    public long countSubarrays(int[] nums, int k) {
        int maxNum = Arrays.stream(nums).max().getAsInt();
        long ans = 0;
        int start = 0, freq = 0;

        for (int end = 0; end < nums.length; end++) {
            if (nums[end] == maxNum) freq++;
            while(k == freq) {
                if (nums[start] == maxNum) {
                    freq--;
                }
                start++;
            }
            ans += start;
        }
        return ans;
    }
}

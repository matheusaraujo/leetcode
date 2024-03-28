class Solution {
    public int maxSubarrayLength(int[] nums, int k) {
        int ans = 0, start = -1;
        Map<Integer, Integer> freq = new HashMap();

        for(int end = 0; end < nums.length; end++) {
            freq.put(nums[end], freq.getOrDefault(nums[end], 0) + 1);

            while(freq.get(nums[end]) > k) {
                start++;
                freq.put(nums[start], freq.getOrDefault(nums[start], 0) - 1);
            }

            ans = Math.max(ans, end - start);
        }
        return ans;
    }
}

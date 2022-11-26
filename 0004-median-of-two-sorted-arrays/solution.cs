public class Solution {
    public double FindMedianSortedArrays(int[] nums1, int[] nums2) {
        var nums = new int[nums1.Length + nums2.Length];
        nums1.CopyTo(nums, 0);
        nums2.CopyTo(nums, nums1.Length);
        Array.Sort(nums);
        var m = (int)Math.Floor(nums.Length / 2d);
        return nums.Length % 2 == 1 ?
            nums[m] :
            (nums[m] + nums[m-1]) / 2d;
    }
}

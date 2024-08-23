class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        chars = set()
        left, ans = 0, 0

        for right in range(len(s)):
            while s[right] in chars:
                chars.remove(s[left])
                left += 1
            chars.add(s[right])
            ans = max(ans, len(chars))

        return ans


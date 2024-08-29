class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        count, left, ans = {}, 0, 0

        for right in range(len(s)):
            c = s[right]
            count[c] = 1 + count.get(c, 0)

            while (right - left + 1) - max(count.values()) > k:
                count[s[left]] -= 1
                left += 1

            ans = max(ans, right - left + 1)

        return ans




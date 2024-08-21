class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        left, right = 0, 1
        ans = 0

        while right < len(prices):
            if prices[left] < prices[right]:
                ans = max(ans, prices[right] - prices[left])
            else:
                left = right
            right += 1

        return ans


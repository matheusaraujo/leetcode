class Solution:
    def findCheapestPrice(self, n: int, flights: List[List[int]], src: int, dst: int, k: int) -> int:
        prices = [math.inf] * n
        prices[src] = 0

        for i in range(k + 1):
            tmpPrices = prices.copy()

            for source, dest, price in flights:
                if prices[source] == math.inf: continue
                tmpPrices[dest] = min(tmpPrices[dest], prices[source] + price)

            prices = tmpPrices

        return -1 if prices[dst] == math.inf else prices[dst]



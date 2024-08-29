class Solution:
    def findItinerary(self, tickets: List[List[str]]) -> List[str]:
        adj = defaultdict(list)
        result = []

        for src, dest in tickets:
            adj[src].append(dest)

        for key in adj: adj[key].sort()

        def dfs(src):
            if src in adj:
                destinations = adj[src][:]
                while destinations:
                    dest = destinations[0]
                    adj[src].pop(0)
                    dfs(dest)
                    destinations = adj[src][:]
            result.append(src)

        dfs("JFK")
        result.reverse()

        return result if len(result) == len(tickets) + 1 else []


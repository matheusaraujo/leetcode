class Solution:
    def destCity(self, paths: List[List[str]]) -> str:
        sources = set(path[0] for path in paths)
        
        for _, destination in paths:
            if destination not in sources:
                return destination

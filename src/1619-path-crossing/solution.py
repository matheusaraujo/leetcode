class Solution:
    def isPathCrossing(self, path: str) -> bool:
        visited, position = set(), (0, 0)
        
        for d in path:
            visited.add(position)
            if d == "N": position = (position[0] + 1, position[1])
            if d == "S": position = (position[0] - 1, position[1])
            if d == "E": position = (position[0], position[1] + 1)
            if d == "W": position = (position[0], position[1] - 1)
            if position in visited: return True
            
        return False


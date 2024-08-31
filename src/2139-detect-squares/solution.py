class DetectSquares:

    def __init__(self):
        self.pointsCount = defaultdict(int)
        self.points = []

    def add(self, point: List[int]) -> None:
        self.pointsCount[tuple(point)] += 1
        self.points.append(point)

    def count(self, point: List[int]) -> int:
        result = 0
        px, py = point

        for x, y in self.points:
            if abs(py - y) != abs(px - x) or x == px or y == py:
                continue
            result += self.pointsCount[(x, py)] * self.pointsCount[(px, y)]
        return result
        


# Your DetectSquares object will be instantiated and called as such:
# obj = DetectSquares()
# obj.add(point)
# param_2 = obj.count(point)

class Solution:
    def partitionLabels(self, s: str) -> List[int]:
        count, result = {}, []

        for i, c in enumerate(s):
            count[c] = i

        size, goal = 0, 0

        for i, c in enumerate(s):
            goal = max(goal, count[c])
            size += 1

            if goal == i:
                result.append(size)
                size = 0

        return result


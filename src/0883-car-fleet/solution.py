class Solution:
    def carFleet(self, target: int, positions: List[int], speeds: List[int]) -> int:
        cars = [(p, s) for p, s in zip(positions, speeds)]
        cars.sort(reverse=True)
        stack = []

        for position, speed in cars:
            stack.append((target - position) / speed)
            if len(stack) >= 2 and stack[-1] <= stack[-2]:
                stack.pop()

        return len(stack)



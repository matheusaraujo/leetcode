class Solution:
    def findOrder(self, numCourses: int, prerequisites: List[List[int]]) -> List[int]:
        prereq = {c: [] for c in range(numCourses)}

        for course, pre in prerequisites:
            prereq[course].append(pre)

        result, visit, cycle = [], set(), set()

        def dfs(course) -> bool:
            if course in cycle: return False
            if course in visit: return True

            cycle.add(course)
            for pre in prereq[course]:
                if not dfs(pre): return False
            cycle.remove(course)
            visit.add(course)
            result.append(course)

            return True

        for course in range(numCourses):
            if not dfs(course): return []

        return result


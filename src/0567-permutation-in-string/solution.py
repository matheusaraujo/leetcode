class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        if len(s2) < len(s1): return False

        ds1, ds2 = {}, {}
        for i in range(len(s1)):
            ds1[s1[i]] = 1 + ds1.get(s1[i], 0)
            ds2[s2[i]] = 1 + ds2.get(s2[i], 0)

        if ds1 == ds2: return True

        left, right = 0, len(s1)

        while right < len(s2):
            ds2[s2[left]] -= 1
            if ds2[s2[left]] == 0: del ds2[s2[left]]
            ds2[s2[right]] = 1 + ds2.get(s2[right], 0)

            if ds1 == ds2: return True

            left, right = left + 1, right + 1

        return False


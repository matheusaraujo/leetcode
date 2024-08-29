class Solution:
    def typed(self, s: str) -> str:
        a = list()
        for c in s:
            if c != "#": a.append(c)
            elif len(a) > 0: a.pop()
        return "".join(a)

    def backspaceCompare(self, s: str, t: str) -> bool:
        return self.typed(s) == self.typed(t)
        

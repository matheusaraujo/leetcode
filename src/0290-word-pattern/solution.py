class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()
        if len(pattern) != len(words): return False
        mpw, mwp = {}, {}
        for p, w in zip(pattern, words):
            if p not in mpw: mpw[p] = w
            if w not in mwp: mwp[w] = p
            if mpw[p] != w or mwp[w] != p:
                return False
        
        return True


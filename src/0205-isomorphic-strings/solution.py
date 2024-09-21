class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        map_st, map_ts = {}, {}
        for cs, ct in zip(s, t):
            if (cs in map_st and ct != map_st[cs]): return False
            if (ct in map_ts and cs != map_ts[ct]): return False
            map_st[cs] = ct
            map_ts[ct] = cs
        
        return True

class Solution:
    def mergeTriplets(self, triplets: List[List[int]], target: List[int]) -> bool:
        sa, sb, sc = set(), set(), set()
        ta, tb, tc = target

        for a, b, c in triplets:
            if a > ta or b > tb or c > tc: continue
            sa.add(a)
            sb.add(b)
            sc.add(c)

        return ta in sa and tb in sb and tc in sc

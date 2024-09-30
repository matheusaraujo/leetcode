class Solution:
    # def maxNumberOfBalloons(self, text: str) -> int:
    #     d = {'b': 0, 'a': 0, 'l': 0, 'o': 0, 'n': 0}
    #     for c in text:
    #         if c in d: d[c] += 1
    #     d['l'], d['o'] = d['l'] // 2, d['o'] // 2
    #     return min(list(d.values()))
    def maxNumberOfBalloons(self, text: str) -> int:
        count = Counter(text)
        count['l'] //= 2
        count['o'] //= 2
        return min(count[c] for c in 'balon')

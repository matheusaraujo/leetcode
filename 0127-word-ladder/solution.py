class Solution:
    def getWordPatterns(self, word: str) -> List[str]:
        result = []
        for i in range(len(word)):
            result.append(word[:i] + "*" + word[i+1:])
        return result

    def createNeighbors(self, wordList: List[str]) -> dict:
        neighbors = {}
        for word in wordList:
            for pattern in self.getWordPatterns(word):
                if pattern not in neighbors: neighbors[pattern] = []
                neighbors[pattern].append(word)
        return neighbors

    def ladderLength(self, beginWord: str, endWord: str, wordList: List[str]) -> int:
        if endWord not in wordList: return 0
        wordList.append(beginWord)

        neighbors = self.createNeighbors(wordList)

        visited, queue = set([beginWord]), deque([(beginWord, 0)])

        while queue:
            word, distance = queue.popleft()
            if word == endWord: return distance + 1

            for pattern in self.getWordPatterns(word):
                for newWord in neighbors[pattern]:
                    if newWord not in visited:
                        visited.add(newWord)
                        queue.append((newWord, distance + 1))

        return 0


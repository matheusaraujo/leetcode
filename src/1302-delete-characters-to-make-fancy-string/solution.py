class Solution:
    def makeFancyString(self, s: str) -> str:
        char, count, answer = "", 1, ""

        for c in s:
            if c == char:
                count += 1
                if count < 3: answer += c
            else:
                char, count = c, 1
                answer += c
            
        return answer

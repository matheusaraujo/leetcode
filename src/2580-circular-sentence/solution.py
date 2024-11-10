class Solution:
    # def isCircularSentence(self, sentence: str) -> bool:
    #     words = sentence.split()
        
    #     if len(words) == 1:
    #         return words[0][0] == words[0][-1]

    #     if words[-1][-1] != words[0][0]:
    #         return False

    #     for i in range(1, len(words)):
    #         if words[i][0] != words[i-1][-1]:
    #             return False
        
    #     return True
    def isCircularSentence(self, sentence: str) -> bool:
        if sentence[0] != sentence[-1]: return False

        for i in range(1, len(sentence)):
            if sentence[i] == " ":
                if sentence[i - 1] != sentence[i + 1]:
                    return False
        return True

class Solution:
    # def largestGoodInteger(self, num: str) -> str:
    #     tmp, result = "", ""

    #     for c in num:
    #         if tmp == "" or tmp[0] != c: tmp = c
    #         else: tmp += c

    #         if len(tmp) == 3 and (result == "" or tmp[0] > result[0]):
    #             result = tmp
        
    #     return result
    def largestGoodInteger(self, num: str) -> str:
        result = ""

        # Loop through the string and check each group of three consecutive characters
        for i in range(len(num) - 2):
            # Check if the three consecutive characters are the same
            if num[i] == num[i+1] == num[i+2]:
                # Compare with the current result and update if it's a larger "good integer"
                result = max(result, num[i]*3)
        
        return result

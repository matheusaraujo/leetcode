class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        n = len(digits)
    
        # Traverse the list in reverse order
        for i in range(n-1, -1, -1):
            if digits[i] < 9:
                # If the current digit is less than 9, increment it by 1 and return
                digits[i] += 1
                return digits
            else:
                # If the current digit is 9, it becomes 0 and carry over 1 to the next digit
                digits[i] = 0
        
        # If all digits are 9, we need an extra digit at the beginning
        return [1] + digits
        
        

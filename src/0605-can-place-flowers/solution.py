class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        available_spots, i, length = 0, 0, len(flowerbed)
        
        while i < length:
            if flowerbed[i] == 0:
                prev_empty = (i == 0 or flowerbed[i - 1] == 0)
                next_empty = (i == length - 1 or flowerbed[i + 1] == 0)
                
                if prev_empty and next_empty:
                    available_spots += 1
                    i += 1
                
            i += 1
        
        return available_spots >= n

from typing import List

class Solution:
    def threeConsecutiveOdds(self, arr: List[int]) -> bool:
        odds = 0
        for num in arr:
            if num % 2 == 1:
                odds += 1
                if odds >= 3:
                    return True
            else:
                odds = 0
        return False
    
print(Solution().threeConsecutiveOdds([1,2,34,3,4,5,7,23,12]))